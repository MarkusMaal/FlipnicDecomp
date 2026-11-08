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

// Function: entry_00161144
// Address: 0x161144 - 0x161168
void entry_00161144_0x161144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161144_0x161144");
#endif

    switch (ctx->pc) {
        case 0x161154u: goto label_161154;
        default: break;
    }

    ctx->pc = 0x161144u;

    // 0x161144: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x161148: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16114c: 0xc05486c  jal         func_1521B0
    ctx->pc = 0x16114Cu;
    SET_GPR_U32(ctx, 31, 0x161154u);
    ctx->pc = 0x161150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16114Cu;
    // 0x161150: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B0u, 0x16114Cu, 0x161154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161154u;
label_161154:
    // 0x161154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161158: 0x0  nop
    ctx->pc = 0x161158u;
    // NOP
    // 0x16115c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16115cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161160: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x161160u;
    {
        const bool branch_taken_0x161160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161160u;
        // 0x161164: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161160) {
            ctx->pc = 0x161238u;
            return;
        }
    }
    ctx->pc = 0x161168u;
}
