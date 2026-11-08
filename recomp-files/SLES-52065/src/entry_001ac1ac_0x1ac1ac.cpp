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

// Function: entry_001ac1ac
// Address: 0x1ac1ac - 0x1ac1d4
void entry_001ac1ac_0x1ac1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac1ac_0x1ac1ac");
#endif

    ctx->pc = 0x1ac1acu;

    // 0x1ac1ac: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac1b0: 0xa22006da  sb          $zero, 0x6DA($s1)
    ctx->pc = 0x1ac1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac1b4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ac1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ac1b8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ac1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ac1bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC1BCu;
    {
        const bool branch_taken_0x1ac1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1BCu;
        // 0x1ac1c0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1bc) {
            ctx->pc = 0x1AC1D4u;
            return;
        }
    }
    ctx->pc = 0x1AC1C4u;
    // 0x1ac1c4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ac1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1ac1c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ac1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ac1cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC1DCu;
            return;
        }
    }
    ctx->pc = 0x1AC1D4u;
}
