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

// Function: entry_001d06f4
// Address: 0x1d06f4 - 0x1d0720
void entry_001d06f4_0x1d06f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d06f4_0x1d06f4");
#endif

    ctx->pc = 0x1d06f4u;

    // 0x1d06f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06f8: 0x8022fc10  lb          $v0, -0x3F0($at)
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC10u));
    // 0x1d06fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D06FCu;
    {
        const bool branch_taken_0x1d06fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06fc) {
            ctx->pc = 0x1D0720u;
            return;
        }
    }
    ctx->pc = 0x1D0704u;
    // 0x1d0704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d070c: 0xa022fc10  sb          $v0, -0x3F0($at)
    ctx->pc = 0x1d070cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC10u, _value); } while (0);
    // 0x1d0710: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x1d0714: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x1d0714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1d0718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d071c: 0xac22fc08  sw          $v0, -0x3F8($at)
    ctx->pc = 0x1d071cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC08u, _value); } while (0);
    ctx->pc = 0x1d0720u;
}
