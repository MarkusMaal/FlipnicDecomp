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

// Function: FUN_001bb450
// Address: 0x1bb450 - 0x1bb4d8
void FUN_001bb450_0x1bb450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb450_0x1bb450");
#endif

    switch (ctx->pc) {
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb4c4u: goto label_1bb4c4;
        default: break;
    }

    ctx->pc = 0x1bb450u;

    // 0x1bb450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb454: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1bb454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb45c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1bb45cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1bb460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb464: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1bb468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb46c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1bb46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb470: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB470u;
    {
        const bool branch_taken_0x1bb470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB470u;
        // 0x1bb474: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb470) {
            ctx->pc = 0x1BB4B8u;
            goto label_1bb4b8;
        }
    }
    ctx->pc = 0x1BB478u;
    // 0x1bb478: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1bb478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bb47c: 0x0  nop
    ctx->pc = 0x1bb47cu;
    // NOP
label_1bb480:
    // 0x1bb480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bb484: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1bb484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb488: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB488u;
    {
        const bool branch_taken_0x1bb488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB488u;
        // 0x1bb48c: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb488) {
            ctx->pc = 0x1BB49Cu;
            goto label_1bb49c;
        }
    }
    ctx->pc = 0x1BB490u;
    // 0x1bb490: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB494u;
    {
        const bool branch_taken_0x1bb494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB494u;
        // 0x1bb498: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb494) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BB49Cu;
label_1bb49c:
    // 0x1bb49c: 0x0  nop
    ctx->pc = 0x1bb49cu;
    // NOP
    // 0x1bb4a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb4ac:
    // 0x1bb4ac: 0x0  nop
    ctx->pc = 0x1bb4acu;
    // NOP
    // 0x1bb4b0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BB4B0u;
    {
        const bool branch_taken_0x1bb4b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4b0) {
            ctx->pc = 0x1BB480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb480;
        }
    }
    ctx->pc = 0x1BB4B8u;
label_1bb4b8:
    // 0x1bb4b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4bc: 0xc06f01c  jal         func_1BC070
    ctx->pc = 0x1BB4BCu;
    SET_GPR_U32(ctx, 31, 0x1BB4C4u);
    ctx->pc = 0x1BB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4BCu;
    // 0x1bb4c0: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC070u, 0x1BB4BCu, 0x1BB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4C4u;
label_1bb4c4:
    // 0x1bb4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1bb4c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D0u;
        // 0x1bb4d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB4D8u;
}
