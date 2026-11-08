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

// Function: entry_0018cffc
// Address: 0x18cffc - 0x18d004
void entry_0018cffc_0x18cffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cffc_0x18cffc");
#endif

    ctx->pc = 0x18cffcu;

    // 0x18cffc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x18CFFCu;
    {
        const bool branch_taken_0x18cffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFFCu;
        // 0x18d000: 0xe64004cc  swc1        $f0, 0x4CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cffc) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D004u;
}
