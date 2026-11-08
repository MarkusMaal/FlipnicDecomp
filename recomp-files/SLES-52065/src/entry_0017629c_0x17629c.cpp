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

// Function: entry_0017629c
// Address: 0x17629c - 0x1762c0
void entry_0017629c_0x17629c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017629c_0x17629c");
#endif

    ctx->pc = 0x17629cu;

    // 0x17629c: 0x92620c24  lbu         $v0, 0xC24($s3)
    ctx->pc = 0x17629cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3108)));
    // 0x1762a0: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1762A0u;
    {
        const bool branch_taken_0x1762a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762A0u;
        // 0x1762a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762a0) {
            ctx->pc = 0x1764A4u;
            return;
        }
    }
    ctx->pc = 0x1762A8u;
    // 0x1762a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1762a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1762ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1762acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1762b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1762b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1762B8u;
    {
        const bool branch_taken_0x1762b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762b8) {
            ctx->pc = 0x17645Cu;
            return;
        }
    }
    ctx->pc = 0x1762C0u;
}
