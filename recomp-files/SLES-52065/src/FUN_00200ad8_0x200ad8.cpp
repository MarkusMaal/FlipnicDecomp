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

// Function: FUN_00200ad8
// Address: 0x200ad8 - 0x200b38
void FUN_00200ad8_0x200ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200ad8_0x200ad8");
#endif

    switch (ctx->pc) {
        case 0x200b04u: goto label_200b04;
        default: break;
    }

    ctx->pc = 0x200ad8u;

    // 0x200ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ae4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200ae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x200ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200aec: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x200af0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x200af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200af8: 0xae202c3c  sw          $zero, 0x2C3C($s1)
    ctx->pc = 0x200af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x392C3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x392C3Cu, _value); } while (0);
    // 0x200afc: 0xc07af1a  jal         func_1EBC68
    ctx->pc = 0x200AFCu;
    SET_GPR_U32(ctx, 31, 0x200B04u);
    ctx->pc = 0x200B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AFCu;
    // 0x200b00: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC68u, 0x200AFCu, 0x200B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B04u;
label_200b04:
    // 0x200b04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x200b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200b0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200B0Cu;
    {
        const bool branch_taken_0x200b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B0Cu;
        // 0x200b10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b0c) {
            ctx->pc = 0x200B24u;
            goto label_200b24;
        }
    }
    ctx->pc = 0x200B14u;
    // 0x200b14: 0x8e222c3c  lw          $v0, 0x2C3C($s1)
    ctx->pc = 0x200b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11324)));
    // 0x200b18: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x200B18u;
    {
        const bool branch_taken_0x200b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b18) {
            ctx->pc = 0x200B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200B18u;
            // 0x200b1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200B24u;
            goto label_200b24;
        }
    }
    ctx->pc = 0x200B20u;
    // 0x200b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200b24:
    // 0x200b24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x200b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x200b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b30: 0x3e00008  jr          $ra
    ctx->pc = 0x200B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B30u;
        // 0x200b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B38u;
}
