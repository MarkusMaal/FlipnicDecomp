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

// Function: entry_0013a58c
// Address: 0x13a58c - 0x13a5c8
void entry_0013a58c_0x13a58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a58c_0x13a58c");
#endif

    ctx->pc = 0x13a58cu;

    // 0x13a58c: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x13a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x13a590: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13a594: 0x34a98021  ori         $t1, $a1, 0x8021
    ctx->pc = 0x13a594u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32801);
    // 0x13a598: 0x34b68121  ori         $s6, $a1, 0x8121
    ctx->pc = 0x13a598u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33057);
    // 0x13a59c: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x13a5a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13a5a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5a4: 0x34b78023  ori         $s7, $a1, 0x8023
    ctx->pc = 0x13a5a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32803);
    // 0x13a5a8: 0x34be8123  ori         $fp, $a1, 0x8123
    ctx->pc = 0x13a5a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33059);
    // 0x13a5ac: 0x25a50001  addiu       $a1, $t5, 0x1
    ctx->pc = 0x13a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x13a5b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13a5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5b4: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a5b8: 0x34630104  ori         $v1, $v1, 0x104
    ctx->pc = 0x13a5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x13a5bc: 0x27b000ac  addiu       $s0, $sp, 0xAC
    ctx->pc = 0x13a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x13a5c0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x13A5C0u;
    {
        const bool branch_taken_0x13a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C0u;
        // 0x13a5c4: 0x7fa50090  sq          $a1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5c0) {
            ctx->pc = 0x13A798u;
            return;
        }
    }
    ctx->pc = 0x13A5C8u;
}
