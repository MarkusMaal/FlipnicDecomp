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

// Function: entry_00147398
// Address: 0x147398 - 0x1473bc
void entry_00147398_0x147398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147398_0x147398");
#endif

    ctx->pc = 0x147398u;

    // 0x147398: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x147398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14739c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x14739Cu;
    {
        const bool branch_taken_0x14739c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14739c) {
            ctx->pc = 0x14745Cu;
            return;
        }
    }
    ctx->pc = 0x1473A4u;
    // 0x1473a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1473a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1473a8: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x1473ac: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x1473acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
    // 0x1473b0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1473b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1473b4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1473b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1473b8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1473b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1473bcu;
}
