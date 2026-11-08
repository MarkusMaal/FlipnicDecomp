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

// Function: FUN_001df5c0
// Address: 0x1df5c0 - 0x1df628
void FUN_001df5c0_0x1df5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df5c0_0x1df5c0");
#endif

    switch (ctx->pc) {
        case 0x1df600u: goto label_1df600;
        case 0x1df608u: goto label_1df608;
        default: break;
    }

    ctx->pc = 0x1df5c0u;

    // 0x1df5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df5cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df5d0: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x1df5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1df5d4: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF5D4u;
    {
        const bool branch_taken_0x1df5d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1DF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5D4u;
        // 0x1df5d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5d4) {
            ctx->pc = 0x1DF610u;
            goto label_1df610;
        }
    }
    ctx->pc = 0x1DF5DCu;
    // 0x1df5dc: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1df5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1df5e0: 0x26319f00  addiu       $s1, $s1, -0x6100
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942464));
    // 0x1df5e4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1df5e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df5ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1df5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1df5f0: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF5F0u;
    {
        const bool branch_taken_0x1df5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df5f0) {
            ctx->pc = 0x1DF5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF5F0u;
            // 0x1df5f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF614u;
            goto label_1df614;
        }
    }
    ctx->pc = 0x1DF5F8u;
    // 0x1df5f8: 0xc077d8a  jal         func_1DF628
    ctx->pc = 0x1DF5F8u;
    SET_GPR_U32(ctx, 31, 0x1DF600u);
    ctx->pc = 0x1DF5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF5F8u;
    // 0x1df5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF628u, 0x1DF5F8u, 0x1DF600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF600u;
label_1df600:
    // 0x1df600: 0xc077daa  jal         func_1DF6A8
    ctx->pc = 0x1DF600u;
    SET_GPR_U32(ctx, 31, 0x1DF608u);
    ctx->pc = 0x1DF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF600u;
    // 0x1df604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6A8u, 0x1DF600u, 0x1DF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF608u;
label_1df608:
    // 0x1df608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df60c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1df60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1df610:
    // 0x1df610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df614:
    // 0x1df614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df61c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df620: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF620u;
        // 0x1df624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF628u;
}
