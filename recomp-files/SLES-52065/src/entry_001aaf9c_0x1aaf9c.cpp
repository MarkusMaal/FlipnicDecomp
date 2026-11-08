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

// Function: entry_001aaf9c
// Address: 0x1aaf9c - 0x1aafc4
void entry_001aaf9c_0x1aaf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf9c_0x1aaf9c");
#endif

    ctx->pc = 0x1aaf9cu;

    // 0x1aaf9c: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1aaf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aafa0: 0xa28006da  sb          $zero, 0x6DA($s4)
    ctx->pc = 0x1aafa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1754), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aafa4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1aafa8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aafa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1aafac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAFACu;
    {
        const bool branch_taken_0x1aafac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFACu;
        // 0x1aafb0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafac) {
            ctx->pc = 0x1AAFC4u;
            return;
        }
    }
    ctx->pc = 0x1AAFB4u;
    // 0x1aafb4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1aafb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aafb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aafbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAFBCu;
    {
        const bool branch_taken_0x1aafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafbc) {
            ctx->pc = 0x1AAFCCu;
            return;
        }
    }
    ctx->pc = 0x1AAFC4u;
}
