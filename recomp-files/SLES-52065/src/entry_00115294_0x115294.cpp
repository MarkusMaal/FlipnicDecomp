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

// Function: entry_00115294
// Address: 0x115294 - 0x1152f0
void entry_00115294_0x115294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115294_0x115294");
#endif

    switch (ctx->pc) {
        case 0x1152c0u: goto label_1152c0;
        case 0x1152e0u: goto label_1152e0;
        default: break;
    }

    ctx->pc = 0x115294u;

label_115294:
    // 0x115294: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
label_115298:
    if (ctx->pc == 0x115298u) {
        ctx->pc = 0x11529Cu;
        goto label_11529c;
    }
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115294) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11529Cu;
label_11529c:
    // 0x11529c: 0x938282c4  lbu         $v0, -0x7D3C($gp)
    ctx->pc = 0x11529cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_1152a0:
    // 0x1152a0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1152a4:
    // 0x1152a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1152a8:
    // 0x1152a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1152ac:
    // 0x1152ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1152acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1152b0:
    // 0x1152b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1152b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1152b4:
    // 0x1152b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1152b8:
    // 0x1152b8: 0x320f809  jalr        $t9
label_1152bc:
    if (ctx->pc == 0x1152BCu) {
        ctx->pc = 0x1152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B8u;
        // 0x1152bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152C0u;
        goto label_1152c0;
    }
    ctx->pc = 0x1152B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1152C0u);
        ctx->pc = 0x1152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B8u;
        // 0x1152bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1152B8u, 0x1152C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1152C0u;
label_1152c0:
    // 0x1152c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1152c4:
    // 0x1152c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1152c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1152c8:
    // 0x1152c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1152cc:
    // 0x1152cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1152d0:
    // 0x1152d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1152d4:
    // 0x1152d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1152d8:
    // 0x1152d8: 0xc045700  jal         func_115C00
label_1152dc:
    if (ctx->pc == 0x1152DCu) {
        ctx->pc = 0x1152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152D8u;
        // 0x1152dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152E0u;
        goto label_1152e0;
    }
    ctx->pc = 0x1152D8u;
    SET_GPR_U32(ctx, 31, 0x1152E0u);
    ctx->pc = 0x1152DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152D8u;
    // 0x1152dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x1152D8u, 0x1152E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152E0u;
label_1152e0:
    // 0x1152e0: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_1152e4:
    // 0x1152e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1152e8:
    // 0x1152e8: 0x10000225  b           . + 4 + (0x225 << 2)
label_1152ec:
    if (ctx->pc == 0x1152ECu) {
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E8u;
        // 0x1152ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1152F0u;
        goto label_fallthrough_0x1152e8;
    }
    ctx->pc = 0x1152E8u;
    {
        const bool branch_taken_0x1152e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E8u;
        // 0x1152ec: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e8) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x1152e8:
    ctx->pc = 0x1152F0u;
}
