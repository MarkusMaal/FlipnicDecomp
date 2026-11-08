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

// Function: entry_0014f508
// Address: 0x14f508 - 0x14f538
void entry_0014f508_0x14f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f508_0x14f508");
#endif

    ctx->pc = 0x14f508u;

    // 0x14f508: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14f50c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14f510: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x14f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14f514: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x14f518: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f51c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x14f520: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x14f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f524: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x14f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f52c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x14f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x14f530: 0xc04eb5c  jal         func_13AD70
    ctx->pc = 0x14F530u;
    SET_GPR_U32(ctx, 31, 0x14F538u);
    ctx->pc = 0x14F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F530u;
    // 0x14f534: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x14F530u, 0x14F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F538u;
}
