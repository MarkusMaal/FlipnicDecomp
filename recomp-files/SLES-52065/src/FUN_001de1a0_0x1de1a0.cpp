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

// Function: FUN_001de1a0
// Address: 0x1de1a0 - 0x1de204
void FUN_001de1a0_0x1de1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de1a0_0x1de1a0");
#endif

    switch (ctx->pc) {
        case 0x1de1ccu: goto label_1de1cc;
        default: break;
    }

    ctx->pc = 0x1de1a0u;

    // 0x1de1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1ac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1de1acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1de1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de1b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1de1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1de1b8: 0x24217300  addiu       $at, $at, 0x7300
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29440));
    // 0x1de1bc: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1de1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1de1c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de1c4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DE1C4u;
    SET_GPR_U32(ctx, 31, 0x1DE1CCu);
    ctx->pc = 0x1DE1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1C4u;
    // 0x1de1c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DE1C4u, 0x1DE1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1CCu;
label_1de1cc:
    // 0x1de1cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de1d0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1de1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1de1d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE1D4u;
    {
        const bool branch_taken_0x1de1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D4u;
        // 0x1de1d8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d4) {
            ctx->pc = 0x1DE1F0u;
            goto label_1de1f0;
        }
    }
    ctx->pc = 0x1DE1DCu;
    // 0x1de1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1e8: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DE1E8u;
    ctx->pc = 0x1DE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1E8u;
    // 0x1de1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1F0u;
label_1de1f0:
    // 0x1de1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1FCu;
        // 0x1de200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE204u;
}
