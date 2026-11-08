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

// Function: entry_00150320
// Address: 0x150320 - 0x15034c
void entry_00150320_0x150320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150320_0x150320");
#endif

    ctx->pc = 0x150320u;

    // 0x150320: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x150320u;
    {
        const bool branch_taken_0x150320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150320) {
            ctx->pc = 0x15034Cu;
            return;
        }
    }
    ctx->pc = 0x150328u;
    // 0x150328: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x15032c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x15032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x150330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x150334: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x150334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x150338: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x150338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15033c: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x15033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150340: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150344: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150344u;
    {
        const bool branch_taken_0x150344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150344u;
        // 0x150348: 0xe4600080  swc1        $f0, 0x80($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150344) {
            ctx->pc = 0x150370u;
            return;
        }
    }
    ctx->pc = 0x15034Cu;
}
