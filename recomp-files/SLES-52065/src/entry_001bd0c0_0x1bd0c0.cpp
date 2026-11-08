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

// Function: entry_001bd0c0
// Address: 0x1bd0c0 - 0x1bd130
void entry_001bd0c0_0x1bd0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd0c0_0x1bd0c0");
#endif

    switch (ctx->pc) {
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd118u: goto label_1bd118;
        default: break;
    }

    ctx->pc = 0x1bd0c0u;

    // 0x1bd0c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd0c4: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BD0C4u;
    {
        const bool branch_taken_0x1bd0c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd0c4) {
            ctx->pc = 0x1BD130u;
            return;
        }
    }
    ctx->pc = 0x1BD0CCu;
    // 0x1bd0cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd0d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0d8: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x1bd0dc: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1bd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bd0e0: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x1bd0e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd0e4: 0x2439826  xor         $s3, $s2, $v1
    ctx->pc = 0x1bd0e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
    // 0x1bd0e8: 0x2e730001  sltiu       $s3, $s3, 0x1
    ctx->pc = 0x1bd0e8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bd0ec: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1bd0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1bd0f0: 0x90460084  lbu         $a2, 0x84($v0)
    ctx->pc = 0x1bd0f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1bd0f4: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x1bd0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1bd0f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bd0fc: 0x90470088  lbu         $a3, 0x88($v0)
    ctx->pc = 0x1bd0fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1bd100: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD100u;
    SET_GPR_U32(ctx, 31, 0x1BD108u);
    ctx->pc = 0x1BD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD100u;
    // 0x1bd104: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD100u, 0x1BD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD108u;
label_1bd108:
    // 0x1bd108: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD108u;
    {
        const bool branch_taken_0x1bd108 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD108u;
        // 0x1bd10c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd108) {
            ctx->pc = 0x1BD130u;
            return;
        }
    }
    ctx->pc = 0x1BD110u;
    // 0x1bd110: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BD110u;
    SET_GPR_U32(ctx, 31, 0x1BD118u);
    ctx->pc = 0x1BD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD110u;
    // 0x1bd114: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BD110u, 0x1BD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD118u;
label_1bd118:
    // 0x1bd118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD118u;
    {
        const bool branch_taken_0x1bd118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd118) {
            ctx->pc = 0x1BD130u;
            return;
        }
    }
    ctx->pc = 0x1BD120u;
    // 0x1bd120: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x1bd120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1bd124: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bd124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bd128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bd12c: 0xa2820050  sb          $v0, 0x50($s4)
    ctx->pc = 0x1bd12cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bd130u;
}
