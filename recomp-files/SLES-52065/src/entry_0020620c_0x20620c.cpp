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

// Function: entry_0020620c
// Address: 0x20620c - 0x206258
void entry_0020620c_0x20620c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020620c_0x20620c");
#endif

    ctx->pc = 0x20620cu;

    // 0x20620c: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x20620cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x206210: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x206210u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x206214: 0x9283f  dsra32      $a1, $t1, 0
    ctx->pc = 0x206214u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x206218: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x206218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x20621c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x20621cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x206220: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x206220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x206224: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x206224u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x206228: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x206228u;
    {
        const bool branch_taken_0x206228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206228u;
        // 0x20622c: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206228) {
            ctx->pc = 0x2065F4u;
            return;
        }
    }
    ctx->pc = 0x206230u;
    // 0x206230: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x206230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206234: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x206234u;
    {
        const bool branch_taken_0x206234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206234u;
        // 0x206238: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206234) {
            ctx->pc = 0x206384u;
            return;
        }
    }
    ctx->pc = 0x20623Cu;
    // 0x20623c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x20623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206240u;
    {
        const bool branch_taken_0x206240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206240u;
        // 0x206244: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206240) {
            ctx->pc = 0x206258u;
            return;
        }
    }
    ctx->pc = 0x206248u;
    // 0x206248: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20624c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206250u;
    {
        const bool branch_taken_0x206250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206250u;
        // 0x206254: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206250) {
            ctx->pc = 0x206270u;
            return;
        }
    }
    ctx->pc = 0x206258u;
}
