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

// Function: entry_001ae5d4
// Address: 0x1ae5d4 - 0x1ae5fc
void entry_001ae5d4_0x1ae5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae5d4_0x1ae5d4");
#endif

    ctx->pc = 0x1ae5d4u;

    // 0x1ae5d4: 0xa28006b9  sb          $zero, 0x6B9($s4)
    ctx->pc = 0x1ae5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae5d8: 0xa28006ba  sb          $zero, 0x6BA($s4)
    ctx->pc = 0x1ae5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae5dc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ae5e0: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ae5e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE5E4u;
    {
        const bool branch_taken_0x1ae5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E4u;
        // 0x1ae5e8: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e4) {
            ctx->pc = 0x1AE5FCu;
            return;
        }
    }
    ctx->pc = 0x1AE5ECu;
    // 0x1ae5ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ae5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1ae5f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ae5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ae5f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE5F4u;
    {
        const bool branch_taken_0x1ae5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F4u;
        // 0x1ae5f8: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f4) {
            ctx->pc = 0x1AE604u;
            return;
        }
    }
    ctx->pc = 0x1AE5FCu;
}
