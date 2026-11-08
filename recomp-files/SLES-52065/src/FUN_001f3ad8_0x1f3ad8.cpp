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

// Function: FUN_001f3ad8
// Address: 0x1f3ad8 - 0x1f3b38
void FUN_001f3ad8_0x1f3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3ad8_0x1f3ad8");
#endif

    switch (ctx->pc) {
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b20u: goto label_1f3b20;
        default: break;
    }

    ctx->pc = 0x1f3ad8u;

    // 0x1f3ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3adc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f3ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3ae4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f3ae8: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x1f3aec: 0x26104000  addiu       $s0, $s0, 0x4000
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x1f3af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3af4: 0xac51a7b8  sw          $s1, -0x5848($v0)
    ctx->pc = 0x1f3af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x21A7B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A7B8u, _value); } while (0);
    // 0x1f3af8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3afc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f3b00: 0xc07acb4  jal         func_1EB2D0
    ctx->pc = 0x1F3B00u;
    SET_GPR_U32(ctx, 31, 0x1F3B08u);
    ctx->pc = 0x1F3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B00u;
    // 0x1f3b04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB2D0u, 0x1F3B00u, 0x1F3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B08u;
label_1f3b08:
    // 0x1f3b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b0c: 0xc07acb4  jal         func_1EB2D0
    ctx->pc = 0x1F3B0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B14u);
    ctx->pc = 0x1F3B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B0Cu;
    // 0x1f3b10: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB2D0u, 0x1F3B0Cu, 0x1F3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B14u;
label_1f3b14:
    // 0x1f3b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b18: 0xc07acb4  jal         func_1EB2D0
    ctx->pc = 0x1F3B18u;
    SET_GPR_U32(ctx, 31, 0x1F3B20u);
    ctx->pc = 0x1F3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B18u;
    // 0x1f3b1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB2D0u, 0x1F3B18u, 0x1F3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B20u;
label_1f3b20:
    // 0x1f3b20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f3b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f3b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f3b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B30u;
        // 0x1f3b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3B38u;
}
