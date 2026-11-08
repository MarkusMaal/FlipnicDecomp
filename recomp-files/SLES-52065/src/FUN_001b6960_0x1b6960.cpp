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

// Function: FUN_001b6960
// Address: 0x1b6960 - 0x1b6ac4
void FUN_001b6960_0x1b6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6960_0x1b6960");
#endif

    switch (ctx->pc) {
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69b8u: goto label_1b69b8;
        case 0x1b69fcu: goto label_1b69fc;
        case 0x1b6a4cu: goto label_1b6a4c;
        case 0x1b6a94u: goto label_1b6a94;
        default: break;
    }

    ctx->pc = 0x1b6960u;

    // 0x1b6960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6964: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b6964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b696c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b697c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b6980: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b6984: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6988: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b6988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b698c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b6990: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1b6990u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b6994: 0x0  nop
    ctx->pc = 0x1b6994u;
    // NOP
    // 0x1b6998: 0x0  nop
    ctx->pc = 0x1b6998u;
    // NOP
    // 0x1b699c: 0x2812  mflo        $a1
    ctx->pc = 0x1b699cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1b69a0: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1B69A0u;
    SET_GPR_U32(ctx, 31, 0x1B69A8u);
    ctx->pc = 0x1B69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69A0u;
    // 0x1b69a4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1B69A0u, 0x1B69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A8u;
label_1b69a8:
    // 0x1b69a8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1b69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b69ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b69acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b69b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B69B0u;
    {
        const bool branch_taken_0x1b69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69B0u;
        // 0x1b69b4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69b0) {
            ctx->pc = 0x1B6A00u;
            goto label_1b6a00;
        }
    }
    ctx->pc = 0x1B69B8u;
label_1b69b8:
    // 0x1b69b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b69bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b69c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b69c4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b69c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b69cc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b69d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b69d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b69d8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b69dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B69DCu;
    {
        const bool branch_taken_0x1b69dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b69dc) {
            ctx->pc = 0x1B69E8u;
            goto label_1b69e8;
        }
    }
    ctx->pc = 0x1B69E4u;
    // 0x1b69e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b69e8:
    // 0x1b69e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b69ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b69f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b69f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b69f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B69F4u;
    SET_GPR_U32(ctx, 31, 0x1B69FCu);
    ctx->pc = 0x1B69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69F4u;
    // 0x1b69f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B69F4u, 0x1B69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69FCu;
label_1b69fc:
    // 0x1b69fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b69fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b6a00:
    // 0x1b6a00: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b6a04: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6a08: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x1b6a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b6a0c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b6a10: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1b6a14: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1b6a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b6a18: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1b6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1b6a1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b6a20: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b6a24: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1b6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b6a28: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1b6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b6a2c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b6a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b6a30: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1b6a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1b6a34: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B6A34u;
    {
        const bool branch_taken_0x1b6a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a34) {
            ctx->pc = 0x1B69B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b69b8;
        }
    }
    ctx->pc = 0x1B6A3Cu;
    // 0x1b6a3c: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B6A3Cu;
    {
        const bool branch_taken_0x1b6a3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A3Cu;
        // 0x1b6a40: 0x2510fffe  addiu       $s0, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a3c) {
            ctx->pc = 0x1B6AACu;
            goto label_1b6aac;
        }
    }
    ctx->pc = 0x1B6A44u;
    // 0x1b6a44: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B6A44u;
    {
        const bool branch_taken_0x1b6a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a44) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A4Cu;
label_1b6a4c:
    // 0x1b6a4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b6a50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6a54: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b6a58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b6a5c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b6a60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1b6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6a64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b6a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6a6c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1b6a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b6a70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6A70u;
    {
        const bool branch_taken_0x1b6a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a70) {
            ctx->pc = 0x1B6A7Cu;
            goto label_1b6a7c;
        }
    }
    ctx->pc = 0x1B6A78u;
    // 0x1b6a78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b6a7c:
    // 0x1b6a7c: 0x0  nop
    ctx->pc = 0x1b6a7cu;
    // NOP
    // 0x1b6a80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b6a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6a88: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6a8c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A94u);
    ctx->pc = 0x1B6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A8Cu;
    // 0x1b6a90: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6A8Cu, 0x1B6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A94u;
label_1b6a94:
    // 0x1b6a94: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b6a98: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B6A98u;
    {
        const bool branch_taken_0x1b6a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A98u;
        // 0x1b6a9c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a98) {
            ctx->pc = 0x1B6A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6a4c;
        }
    }
    ctx->pc = 0x1B6AA0u;
label_1b6aa0:
    // 0x1b6aa0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6aa4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1b6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b6aa8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1b6aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1b6aac:
    // 0x1b6aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ABCu;
        // 0x1b6ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6AC4u;
}
