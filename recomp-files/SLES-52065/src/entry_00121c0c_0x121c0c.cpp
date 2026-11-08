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

// Function: entry_00121c0c
// Address: 0x121c0c - 0x121c90
void entry_00121c0c_0x121c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c0c_0x121c0c");
#endif

    switch (ctx->pc) {
        case 0x121c18u: goto label_121c18;
        case 0x121c24u: goto label_121c24;
        case 0x121c34u: goto label_121c34;
        case 0x121c44u: goto label_121c44;
        case 0x121c54u: goto label_121c54;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c78u: goto label_121c78;
        case 0x121c80u: goto label_121c80;
        case 0x121c8cu: goto label_121c8c;
        default: break;
    }

    ctx->pc = 0x121c0cu;

    // 0x121c0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121c10: 0xc049500  jal         func_125400
    ctx->pc = 0x121C10u;
    SET_GPR_U32(ctx, 31, 0x121C18u);
    ctx->pc = 0x121C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C10u;
    // 0x121c14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125400u, 0x121C10u, 0x121C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C18u;
label_121c18:
    // 0x121c18: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c1c: 0xc048920  jal         func_122480
    ctx->pc = 0x121C1Cu;
    SET_GPR_U32(ctx, 31, 0x121C24u);
    ctx->pc = 0x121C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C1Cu;
    // 0x121c20: 0x27a501cc  addiu       $a1, $sp, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121C1Cu, 0x121C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C24u;
label_121c24:
    // 0x121c24: 0x27b1016c  addiu       $s1, $sp, 0x16C
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x121c28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121c2c: 0xc080748  jal         func_201D20
    ctx->pc = 0x121C2Cu;
    SET_GPR_U32(ctx, 31, 0x121C34u);
    ctx->pc = 0x121C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C2Cu;
    // 0x121c30: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121C2Cu, 0x121C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C34u;
label_121c34:
    // 0x121c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c38: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c3c: 0xc048884  jal         func_122210
    ctx->pc = 0x121C3Cu;
    SET_GPR_U32(ctx, 31, 0x121C44u);
    ctx->pc = 0x121C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C3Cu;
    // 0x121c40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121C3Cu, 0x121C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x121c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c48: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x121c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c4c: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121C4Cu;
    SET_GPR_U32(ctx, 31, 0x121C54u);
    ctx->pc = 0x121C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C4Cu;
    // 0x121c50: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121C4Cu, 0x121C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C54u;
label_121c54:
    // 0x121c54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121c58: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121c5c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x121c60: 0x27a601a8  addiu       $a2, $sp, 0x1A8
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c64: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121C64u;
    SET_GPR_U32(ctx, 31, 0x121C6Cu);
    ctx->pc = 0x121C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C64u;
    // 0x121c68: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121C64u, 0x121C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C6Cu;
label_121c6c:
    // 0x121c6c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x121c70: 0xc04619c  jal         func_118670
    ctx->pc = 0x121C70u;
    SET_GPR_U32(ctx, 31, 0x121C78u);
    ctx->pc = 0x121C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C70u;
    // 0x121c74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121C70u, 0x121C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C78u;
label_121c78:
    // 0x121c78: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121C78u;
    SET_GPR_U32(ctx, 31, 0x121C80u);
    ctx->pc = 0x121C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C78u;
    // 0x121c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121C78u, 0x121C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C80u;
label_121c80:
    // 0x121c80: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x121c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x121c84: 0xc04619c  jal         func_118670
    ctx->pc = 0x121C84u;
    SET_GPR_U32(ctx, 31, 0x121C8Cu);
    ctx->pc = 0x121C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C84u;
    // 0x121c88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121C84u, 0x121C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C8Cu;
label_121c8c:
    // 0x121c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121c90u;
}
