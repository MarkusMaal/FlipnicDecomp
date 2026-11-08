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

// Function: entry_00114948
// Address: 0x114948 - 0x114998
void entry_00114948_0x114948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114948_0x114948");
#endif

    switch (ctx->pc) {
        case 0x11496cu: goto label_11496c;
        case 0x11498cu: goto label_11498c;
        default: break;
    }

    ctx->pc = 0x114948u;

label_114948:
    // 0x114948: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_11494c:
    // 0x11494c: 0x8e450278  lw          $a1, 0x278($s2)
    ctx->pc = 0x11494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114950:
    // 0x114950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114954:
    // 0x114954: 0x9382825c  lbu         $v0, -0x7DA4($gp)
    ctx->pc = 0x114954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935132)));
label_114958:
    // 0x114958: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11495c:
    // 0x11495c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11495cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114960:
    // 0x114960: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114964:
    // 0x114964: 0x320f809  jalr        $t9
label_114968:
    if (ctx->pc == 0x114968u) {
        ctx->pc = 0x114968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114964u;
        // 0x114968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11496Cu;
        goto label_11496c;
    }
    ctx->pc = 0x114964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11496Cu);
        ctx->pc = 0x114968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114964u;
        // 0x114968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114964u, 0x11496Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11496Cu;
label_11496c:
    // 0x11496c: 0x93828260  lbu         $v0, -0x7DA0($gp)
    ctx->pc = 0x11496cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_114970:
    // 0x114970: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_114974:
    // 0x114974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114978:
    // 0x114978: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11497c:
    // 0x11497c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11497cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114980:
    // 0x114980: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114984:
    // 0x114984: 0x320f809  jalr        $t9
label_114988:
    if (ctx->pc == 0x114988u) {
        ctx->pc = 0x114988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114984u;
        // 0x114988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11498Cu;
        goto label_11498c;
    }
    ctx->pc = 0x114984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11498Cu);
        ctx->pc = 0x114988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114984u;
        // 0x114988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114984u, 0x11498Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11498Cu;
label_11498c:
    // 0x11498c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114990:
    // 0x114990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114994:
    // 0x114994: 0xae420260  sw          $v0, 0x260($s2)
    ctx->pc = 0x114994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
    ctx->pc = 0x114998u;
}
