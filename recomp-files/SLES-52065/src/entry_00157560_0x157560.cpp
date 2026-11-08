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

// Function: entry_00157560
// Address: 0x157560 - 0x157570
void entry_00157560_0x157560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157560_0x157560");
#endif

    ctx->pc = 0x157560u;

    // 0x157560: 0xc4860288  lwc1        $f6, 0x288($a0)
    ctx->pc = 0x157560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x157564: 0xc7878020  lwc1        $f7, -0x7FE0($gp)
    ctx->pc = 0x157564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x157568: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x157568u;
    {
        const bool branch_taken_0x157568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157568u;
        // 0x15756c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157568) {
            ctx->pc = 0x1575E4u;
            return;
        }
    }
    ctx->pc = 0x157570u;
}
