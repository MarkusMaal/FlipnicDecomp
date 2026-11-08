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

// Function: entry_0011c68c
// Address: 0x11c68c - 0x11c6d0
void entry_0011c68c_0x11c68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c68c_0x11c68c");
#endif

    ctx->pc = 0x11c68cu;

    // 0x11c68c: 0x122002c0  beqz        $s1, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x11C68Cu;
    {
        const bool branch_taken_0x11c68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c68c) {
            ctx->pc = 0x11D190u;
            return;
        }
    }
    ctx->pc = 0x11C694u;
    // 0x11c694: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x11c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x11c698: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11c69c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11C69Cu;
    {
        const bool branch_taken_0x11c69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C69Cu;
        // 0x11c6a0: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c69c) {
            ctx->pc = 0x11C6D0u;
            return;
        }
    }
    ctx->pc = 0x11C6A4u;
    // 0x11c6a4: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x11c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c6a8: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c6ac: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c6b0: 0x8f8383dc  lw          $v1, -0x7C24($gp)
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935516)));
    // 0x11c6b4: 0x10e30010  beq         $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C6B4u;
    {
        const bool branch_taken_0x11c6b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6B4u;
        // 0x11c6b8: 0xa48023  subu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6b4) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11C6BCu;
    // 0x11c6bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c6c0: 0x10e3000d  beq         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11C6C0u;
    {
        const bool branch_taken_0x11c6c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c6c0) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11C6C8u;
    // 0x11c6c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C6C8u;
    {
        const bool branch_taken_0x11c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C8u;
        // 0x11c6cc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6c8) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11C6D0u;
}
