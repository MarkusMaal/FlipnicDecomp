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

// Function: entry_00157468
// Address: 0x157468 - 0x157474
void entry_00157468_0x157468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157468_0x157468");
#endif

    ctx->pc = 0x157468u;

    // 0x157468: 0xc4840288  lwc1        $f4, 0x288($a0)
    ctx->pc = 0x157468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15746c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15746Cu;
    {
        const bool branch_taken_0x15746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15746Cu;
        // 0x157470: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15746c) {
            ctx->pc = 0x1574F4u;
            return;
        }
    }
    ctx->pc = 0x157474u;
}
