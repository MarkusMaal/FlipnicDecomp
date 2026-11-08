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

// Function: entry_00132c58
// Address: 0x132c58 - 0x132cc0
void entry_00132c58_0x132c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132c58_0x132c58");
#endif

    switch (ctx->pc) {
        case 0x132c78u: goto label_132c78;
        default: break;
    }

    ctx->pc = 0x132c58u;

    // 0x132c58: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x132c5c: 0x2463ee30  addiu       $v1, $v1, -0x11D0
    ctx->pc = 0x132c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962736));
    // 0x132c60: 0x12230017  beq         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x132C60u;
    {
        const bool branch_taken_0x132c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x132C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C60u;
        // 0x132c64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c60) {
            ctx->pc = 0x132CC0u;
            return;
        }
    }
    ctx->pc = 0x132C68u;
    // 0x132c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c70: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x132C70u;
    SET_GPR_U32(ctx, 31, 0x132C78u);
    ctx->pc = 0x132C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C70u;
    // 0x132c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x132C70u, 0x132C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C78u;
label_132c78:
    // 0x132c78: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x132c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x132c7c: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x132c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x132c80: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x132c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x132c84: 0xde050090  ld          $a1, 0x90($s0)
    ctx->pc = 0x132c84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x132c88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x132c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132c8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x132c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x132c90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x132c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x132c94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x132c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x132c98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132c9c: 0x521b8  dsll        $a0, $a1, 6
    ctx->pc = 0x132c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 6);
    // 0x132ca0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x132ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x132ca4: 0x4257e  dsrl32      $a0, $a0, 21
    ctx->pc = 0x132ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 21));
    // 0x132ca8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x132ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x132cac: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x132cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x132cb0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x132cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x132cb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132cb8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x132CB8u;
    {
        const bool branch_taken_0x132cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CB8u;
        // 0x132cbc: 0xfe030090  sd          $v1, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cb8) {
            ctx->pc = 0x132D10u;
            return;
        }
    }
    ctx->pc = 0x132CC0u;
}
