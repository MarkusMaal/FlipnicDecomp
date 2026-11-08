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

// Function: FUN_001f8b00
// Address: 0x1f8b00 - 0x1f8b44
void FUN_001f8b00_0x1f8b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8b00_0x1f8b00");
#endif

    switch (ctx->pc) {
        case 0x1f8b20u: goto label_1f8b20;
        case 0x1f8b30u: goto label_1f8b30;
        default: break;
    }

    ctx->pc = 0x1f8b00u;

    // 0x1f8b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8b08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8b0c: 0x3c100020  lui         $s0, 0x20
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32 << 16));
    // 0x1f8b10: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1f8b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1f8b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8b18: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1F8B18u;
    SET_GPR_U32(ctx, 31, 0x1F8B20u);
    ctx->pc = 0x1F8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B18u;
    // 0x1f8b1c: 0x26108ad8  addiu       $s0, $s0, -0x7528 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1F8B18u, 0x1F8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B20u;
label_1f8b20:
    // 0x1f8b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b28: 0xc07ace8  jal         func_1EB3A0
    ctx->pc = 0x1F8B28u;
    SET_GPR_U32(ctx, 31, 0x1F8B30u);
    ctx->pc = 0x1F8B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B28u;
    // 0x1f8b2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB3A0u, 0x1F8B28u, 0x1F8B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B30u;
label_1f8b30:
    // 0x1f8b30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8b34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f8b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8b3c: 0x807ad50  j           func_1EB540
    ctx->pc = 0x1F8B3Cu;
    ctx->pc = 0x1F8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B3Cu;
    // 0x1f8b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    SleepThread_0x1eb540(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8B44u;
}
