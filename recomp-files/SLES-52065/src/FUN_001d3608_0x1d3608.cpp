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

// Function: FUN_001d3608
// Address: 0x1d3608 - 0x1d3698
void FUN_001d3608_0x1d3608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3608_0x1d3608");
#endif

    switch (ctx->pc) {
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3660u: goto label_1d3660;
        default: break;
    }

    ctx->pc = 0x1d3608u;

    // 0x1d3608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d360c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3618: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d361c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3628: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D3628u;
    SET_GPR_U32(ctx, 31, 0x1D3630u);
    ctx->pc = 0x1D362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3628u;
    // 0x1d362c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D3628u, 0x1D3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3630u;
label_1d3630:
    // 0x1d3630: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d3630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3634: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d3634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3638: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d363c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3640: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3644: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3648: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d364c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d364cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d3650: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d3650u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d3654: 0xac310448  sw          $s1, 0x448($at)
    ctx->pc = 0x1d3654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1096), GPR_U32(ctx, 17));
    // 0x1d3658: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D3658u;
    SET_GPR_U32(ctx, 31, 0x1D3660u);
    ctx->pc = 0x1D365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3658u;
    // 0x1d365c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D3658u, 0x1D3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3660u;
label_1d3660:
    // 0x1d3660: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3660u;
    {
        const bool branch_taken_0x1d3660 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3660u;
        // 0x1d3664: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3660) {
            ctx->pc = 0x1D3680u;
            goto label_1d3680;
        }
    }
    ctx->pc = 0x1D3668u;
    // 0x1d3668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d366c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d366cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3678: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D3678u;
    ctx->pc = 0x1D367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3678u;
    // 0x1d367c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3680u;
label_1d3680:
    // 0x1d3680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3688: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d368c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3690: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3690u;
        // 0x1d3694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3698u;
}
