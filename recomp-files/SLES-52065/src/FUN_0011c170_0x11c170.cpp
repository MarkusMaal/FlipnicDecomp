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

// Function: FUN_0011c170
// Address: 0x11c170 - 0x11c234
void FUN_0011c170_0x11c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c170_0x11c170");
#endif

    switch (ctx->pc) {
        case 0x11c184u: goto label_11c184;
        default: break;
    }

    ctx->pc = 0x11c170u;

    // 0x11c170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11c17c: 0xc082c2e  jal         func_20B0B8
    ctx->pc = 0x11C17Cu;
    SET_GPR_U32(ctx, 31, 0x11C184u);
    ctx->pc = 0x11C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C17Cu;
    // 0x11c180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x11C17Cu, 0x11C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C184u;
label_11c184:
    // 0x11c184: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c188: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11c188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11c18c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x11c18cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c190: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x11c194: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x11c194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11c198: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c19c: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x11c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x11c1a0: 0x30c50f00  andi        $a1, $a2, 0xF00
    ctx->pc = 0x11c1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x11c1a4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x11c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x11c1a8: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x11c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x11c1ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11c1b0: 0xdce5fff0  ld          $a1, -0x10($a3)
    ctx->pc = 0x11c1b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294967280)));
    // 0x11c1b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11c1b8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11c1bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x11c1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11c1c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11c1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11c1c4: 0x5183e  dsrl32      $v1, $a1, 0
    ctx->pc = 0x11c1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11c1c8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x11c1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x11c1cc: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x11c1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11c1d0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x11C1D0u;
    {
        const bool branch_taken_0x11c1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D0u;
        // 0x11c1d4: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1d0) {
            ctx->pc = 0x11C224u;
            goto label_11c224;
        }
    }
    ctx->pc = 0x11C1D8u;
    // 0x11c1d8: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x11c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x11c1dc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x11c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x11c1e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c1e4: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x11c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x11c1e8: 0xdc84fff0  ld          $a0, -0x10($a0)
    ctx->pc = 0x11c1e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x11c1ec: 0x4283e  dsrl32      $a1, $a0, 0
    ctx->pc = 0x11c1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11c1f0: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x11c1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x11c1f4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x11c1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11c1f8: 0x5287e  dsrl32      $a1, $a1, 1
    ctx->pc = 0x11c1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x11c1fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11c200: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11c200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11c204: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11c208: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11c208u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11c20c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x11c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11c210: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x11c210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x11c214: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11c214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x11c218: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c21c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x11c21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x11c220: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x11c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_11c224:
    // 0x11c224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c22c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C22Cu;
        // 0x11c230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C234u;
}
