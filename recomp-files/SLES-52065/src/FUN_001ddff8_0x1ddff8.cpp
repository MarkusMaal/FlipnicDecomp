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

// Function: FUN_001ddff8
// Address: 0x1ddff8 - 0x1de05c
void FUN_001ddff8_0x1ddff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddff8_0x1ddff8");
#endif

    switch (ctx->pc) {
        case 0x1de024u: goto label_1de024;
        default: break;
    }

    ctx->pc = 0x1ddff8u;

    // 0x1ddff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de004: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1de008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de00c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1de010: 0x242172f0  addiu       $at, $at, 0x72F0
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29424));
    // 0x1de014: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1de018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de01c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DE01Cu;
    SET_GPR_U32(ctx, 31, 0x1DE024u);
    ctx->pc = 0x1DE020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE01Cu;
    // 0x1de020: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DE01Cu, 0x1DE024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE024u;
label_1de024:
    // 0x1de024: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de028: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1de028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1de02c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE02Cu;
    {
        const bool branch_taken_0x1de02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE02Cu;
        // 0x1de030: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de02c) {
            ctx->pc = 0x1DE048u;
            goto label_1de048;
        }
    }
    ctx->pc = 0x1DE034u;
    // 0x1de034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de040: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DE040u;
    ctx->pc = 0x1DE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE040u;
    // 0x1de044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE048u;
label_1de048:
    // 0x1de048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de054: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE054u;
        // 0x1de058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE05Cu;
}
