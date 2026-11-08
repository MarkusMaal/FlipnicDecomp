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

// Function: entry_00156d54
// Address: 0x156d54 - 0x156d68
void entry_00156d54_0x156d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d54_0x156d54");
#endif

    ctx->pc = 0x156d54u;

    // 0x156d54: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x156d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x156d58: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x156D58u;
    {
        const bool branch_taken_0x156d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D58u;
        // 0x156d5c: 0xe62002a0  swc1        $f0, 0x2A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d58) {
            ctx->pc = 0x156D68u;
            return;
        }
    }
    ctx->pc = 0x156D60u;
    // 0x156d60: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x156d60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156d64: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x156d64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
    ctx->pc = 0x156d68u;
}
