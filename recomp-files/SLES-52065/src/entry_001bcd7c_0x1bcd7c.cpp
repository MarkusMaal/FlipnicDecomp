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

// Function: entry_001bcd7c
// Address: 0x1bcd7c - 0x1bcdf0
void entry_001bcd7c_0x1bcd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd7c_0x1bcd7c");
#endif

    switch (ctx->pc) {
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdd8u: goto label_1bcdd8;
        default: break;
    }

    ctx->pc = 0x1bcd7cu;

    // 0x1bcd7c: 0x0  nop
    ctx->pc = 0x1bcd7cu;
    // NOP
    // 0x1bcd80: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1bcd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bcd84: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1bcd88: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x1bcd88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bcd8c: 0x2439826  xor         $s3, $s2, $v1
    ctx->pc = 0x1bcd8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
    // 0x1bcd90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BCD90u;
    {
        const bool branch_taken_0x1bcd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD90u;
        // 0x1bcd94: 0x2e730001  sltiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd90) {
            ctx->pc = 0x1BCDF0u;
            return;
        }
    }
    ctx->pc = 0x1BCD98u;
    // 0x1bcd98: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x1bcd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1bcd9c: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x1bcd9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bcda0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bcda4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bcda8: 0x90460070  lbu         $a2, 0x70($v0)
    ctx->pc = 0x1bcda8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1bcdac: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x1bcdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdb4: 0x92820020  lbu         $v0, 0x20($s4)
    ctx->pc = 0x1bcdb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1bcdb8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bcdbc: 0x90470074  lbu         $a3, 0x74($v0)
    ctx->pc = 0x1bcdbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1bcdc0: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BCDC0u;
    SET_GPR_U32(ctx, 31, 0x1BCDC8u);
    ctx->pc = 0x1BCDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDC0u;
    // 0x1bcdc4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BCDC0u, 0x1BCDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDC8u;
label_1bcdc8:
    // 0x1bcdc8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCDC8u;
    {
        const bool branch_taken_0x1bcdc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDC8u;
        // 0x1bcdcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdc8) {
            ctx->pc = 0x1BCDF0u;
            return;
        }
    }
    ctx->pc = 0x1BCDD0u;
    // 0x1bcdd0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCDD0u;
    SET_GPR_U32(ctx, 31, 0x1BCDD8u);
    ctx->pc = 0x1BCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDD0u;
    // 0x1bcdd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCDD0u, 0x1BCDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDD8u;
label_1bcdd8:
    // 0x1bcdd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCDD8u;
    {
        const bool branch_taken_0x1bcdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdd8) {
            ctx->pc = 0x1BCDF0u;
            return;
        }
    }
    ctx->pc = 0x1BCDE0u;
    // 0x1bcde0: 0x92820020  lbu         $v0, 0x20($s4)
    ctx->pc = 0x1bcde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1bcde4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bcde8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bcdec: 0xa2820020  sb          $v0, 0x20($s4)
    ctx->pc = 0x1bcdecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bcdf0u;
}
