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

// Function: entry_00187adc
// Address: 0x187adc - 0x187af4
void entry_00187adc_0x187adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187adc_0x187adc");
#endif

    ctx->pc = 0x187adcu;

    // 0x187adc: 0x0  nop
    ctx->pc = 0x187adcu;
    // NOP
    // 0x187ae0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x187ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ae4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187aec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x187AECu;
    {
        const bool branch_taken_0x187aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AECu;
        // 0x187af0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187aec) {
            ctx->pc = 0x187B38u;
            return;
        }
    }
    ctx->pc = 0x187AF4u;
}
