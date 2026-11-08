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

// Function: entry_00128798
// Address: 0x128798 - 0x1287a4
void entry_00128798_0x128798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128798_0x128798");
#endif

    ctx->pc = 0x128798u;

    // 0x128798: 0xe68300a4  swc1        $f3, 0xA4($s4)
    ctx->pc = 0x128798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
    // 0x12879c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12879Cu;
        // 0x1287a0: 0xae800138  sw          $zero, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12879c) {
            ctx->pc = 0x1287C8u;
            return;
        }
    }
    ctx->pc = 0x1287A4u;
}
