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

// Function: entry_001ca090
// Address: 0x1ca090 - 0x1ca154
void entry_001ca090_0x1ca090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca090_0x1ca090");
#endif

    switch (ctx->pc) {
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0c8u: goto label_1ca0c8;
        case 0x1ca0dcu: goto label_1ca0dc;
        case 0x1ca120u: goto label_1ca120;
        case 0x1ca130u: goto label_1ca130;
        case 0x1ca140u: goto label_1ca140;
        default: break;
    }

    ctx->pc = 0x1ca090u;

    // 0x1ca090: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca094: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca098: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA098u;
    SET_GPR_U32(ctx, 31, 0x1CA0A0u);
    ctx->pc = 0x1CA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA098u;
    // 0x1ca09c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA098u, 0x1CA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0A0u;
label_1ca0a0:
    // 0x1ca0a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ca0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0a4: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1ca0a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0ACu;
    SET_GPR_U32(ctx, 31, 0x1CA0B4u);
    ctx->pc = 0x1CA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0ACu;
    // 0x1ca0b0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0ACu, 0x1CA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0B4u;
label_1ca0b4:
    // 0x1ca0b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ca0c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0C0u;
    SET_GPR_U32(ctx, 31, 0x1CA0C8u);
    ctx->pc = 0x1CA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0C0u;
    // 0x1ca0c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0C0u, 0x1CA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0C8u;
label_1ca0c8:
    // 0x1ca0c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0d0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ca0d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA0D4u;
    SET_GPR_U32(ctx, 31, 0x1CA0DCu);
    ctx->pc = 0x1CA0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0D4u;
    // 0x1ca0d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA0D4u, 0x1CA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0DCu;
label_1ca0dc:
    // 0x1ca0dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ca0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca0e4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ca0e8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1ca0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ca0ec: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1CA0ECu;
    {
        const bool branch_taken_0x1ca0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0ec) {
            ctx->pc = 0x1CA234u;
            return;
        }
    }
    ctx->pc = 0x1CA0F4u;
    // 0x1ca0f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca0f8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ca0fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ca0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca104: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1ca108: 0x84420884  lh          $v0, 0x884($v0)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2180)));
    // 0x1ca10c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA10Cu;
    {
        const bool branch_taken_0x1ca10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA10Cu;
        // 0x1ca110: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca10c) {
            ctx->pc = 0x1CA154u;
            return;
        }
    }
    ctx->pc = 0x1CA114u;
    // 0x1ca114: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ca114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca118: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA118u;
    SET_GPR_U32(ctx, 31, 0x1CA120u);
    ctx->pc = 0x1CA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA118u;
    // 0x1ca11c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA118u, 0x1CA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA120u;
label_1ca120:
    // 0x1ca120: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca128: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA128u;
    SET_GPR_U32(ctx, 31, 0x1CA130u);
    ctx->pc = 0x1CA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA128u;
    // 0x1ca12c: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA128u, 0x1CA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA130u;
label_1ca130:
    // 0x1ca130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca134: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ca138: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA138u;
    SET_GPR_U32(ctx, 31, 0x1CA140u);
    ctx->pc = 0x1CA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA138u;
    // 0x1ca13c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA138u, 0x1CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA140u;
label_1ca140:
    // 0x1ca140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca144: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1ca144u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca148: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1ca148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ca14c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA14Cu;
    {
        const bool branch_taken_0x1ca14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA14Cu;
        // 0x1ca150: 0xa043008c  sb          $v1, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca14c) {
            ctx->pc = 0x1CA194u;
            return;
        }
    }
    ctx->pc = 0x1CA154u;
}
