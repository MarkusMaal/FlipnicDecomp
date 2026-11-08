#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a06d8
// Address: 0x1a06d8 - 0x1a0740
void entry_001a06d8_0x1a06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06d8_0x1a06d8");
#endif

    switch (ctx->pc) {
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0738u: goto label_1a0738;
        default: break;
    }

    ctx->pc = 0x1a06d8u;

label_1a06d8:
    // 0x1a06d8: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x1a06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1a06dc:
    // 0x1a06dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a06e0:
    // 0x1a06e0: 0xae430328  sw          $v1, 0x328($s2)
    ctx->pc = 0x1a06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 3));
label_1a06e4:
    // 0x1a06e4: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a06e8:
    // 0x1a06e8: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1a06ec:
    // 0x1a06ec: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a06f0:
    // 0x1a06f0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a06f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a06f4:
    // 0x1a06f4: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_1a06f8:
    if (ctx->pc == 0x1A06F8u) {
        ctx->pc = 0x1A06FCu;
        goto label_1a06fc;
    }
    ctx->pc = 0x1A06F4u;
    {
        const bool branch_taken_0x1a06f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06f4) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
    ctx->pc = 0x1A06FCu;
label_1a06fc:
    // 0x1a06fc: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x1a06fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1a0700:
    // 0x1a0700: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
label_1a0704:
    if (ctx->pc == 0x1A0704u) {
        ctx->pc = 0x1A0708u;
        goto label_1a0708;
    }
    ctx->pc = 0x1A0700u;
    {
        const bool branch_taken_0x1a0700 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a0700) {
            ctx->pc = 0x1A0740u;
            return;
        }
    }
    ctx->pc = 0x1A0708u;
label_1a0708:
    // 0x1a0708: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a070c:
    // 0x1a070c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a070cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0710:
    // 0x1a0710: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a0710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a0714:
    // 0x1a0714: 0x320f809  jalr        $t9
label_1a0718:
    if (ctx->pc == 0x1A0718u) {
        ctx->pc = 0x1A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0714u;
        // 0x1a0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A071Cu;
        goto label_1a071c;
    }
    ctx->pc = 0x1A0714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A071Cu);
        ctx->pc = 0x1A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0714u;
        // 0x1a0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0714u, 0x1A071Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0720:
    // 0x1a0720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0724:
    // 0x1a0724: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a0728:
    // 0x1a0728: 0x320f809  jalr        $t9
label_1a072c:
    if (ctx->pc == 0x1A072Cu) {
        ctx->pc = 0x1A072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0728u;
        // 0x1a072c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0730u;
        goto label_1a0730;
    }
    ctx->pc = 0x1A0728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0730u);
        ctx->pc = 0x1A072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0728u;
        // 0x1a072c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0728u, 0x1A0730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0730u;
label_1a0730:
    // 0x1a0730: 0xc063e14  jal         func_18F850
label_1a0734:
    if (ctx->pc == 0x1A0734u) {
        ctx->pc = 0x1A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0730u;
        // 0x1a0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0738u;
        goto label_1a0738;
    }
    ctx->pc = 0x1A0730u;
    SET_GPR_U32(ctx, 31, 0x1A0738u);
    ctx->pc = 0x1A0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0730u;
    // 0x1a0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A0730u, 0x1A0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0738u;
label_1a0738:
    // 0x1a0738: 0x10000040  b           . + 4 + (0x40 << 2)
label_1a073c:
    if (ctx->pc == 0x1A073Cu) {
        ctx->pc = 0x1A0740u;
        goto label_fallthrough_0x1a0738;
    }
    ctx->pc = 0x1A0738u;
    {
        const bool branch_taken_0x1a0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0738) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
label_fallthrough_0x1a0738:
    ctx->pc = 0x1A0740u;
}
