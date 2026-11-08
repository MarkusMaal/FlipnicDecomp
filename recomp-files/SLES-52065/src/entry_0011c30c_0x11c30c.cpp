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

// Function: entry_0011c30c
// Address: 0x11c30c - 0x11c370
void entry_0011c30c_0x11c30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c30c_0x11c30c");
#endif

    ctx->pc = 0x11c30cu;

    // 0x11c30c: 0x0  nop
    ctx->pc = 0x11c30cu;
    // NOP
    // 0x11c310: 0x54480  sll         $t0, $a1, 18
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 18));
    // 0x11c314: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x11c318: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x11c318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11c31c: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x11c320: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11c320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11c324: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11c328: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x11c328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x11c32c: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x11c330: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11c334: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x11c334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11c338: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x11c338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c340: 0x10480a  movz        $t1, $zero, $s0
    ctx->pc = 0x11c340u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x11c344: 0xc5380a  movz        $a3, $a2, $a1
    ctx->pc = 0x11c344u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x11c348: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11c348u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11c34c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x11c34cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11c350: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11c350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c354: 0x93f38  dsll        $a3, $t1, 28
    ctx->pc = 0x11c354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << 28);
    // 0x11c358: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x11c358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x11c35c: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x11c35cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x11c360: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x11c360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x11c364: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x11c364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x11c368: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11C368u;
    {
        const bool branch_taken_0x11c368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C368u;
        // 0x11c36c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c368) {
            ctx->pc = 0x11C2F0u;
            return;
        }
    }
    ctx->pc = 0x11C370u;
}
