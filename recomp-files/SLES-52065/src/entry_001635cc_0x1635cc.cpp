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

// Function: entry_001635cc
// Address: 0x1635cc - 0x163614
void entry_001635cc_0x1635cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001635cc_0x1635cc");
#endif

    switch (ctx->pc) {
        case 0x1635ecu: goto label_1635ec;
        default: break;
    }

    ctx->pc = 0x1635ccu;

    // 0x1635cc: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1635CCu;
    {
        const bool branch_taken_0x1635cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635CCu;
        // 0x1635d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635cc) {
            ctx->pc = 0x163618u;
            return;
        }
    }
    ctx->pc = 0x1635D4u;
    // 0x1635d4: 0x8623021a  lh          $v1, 0x21A($s1)
    ctx->pc = 0x1635d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x1635d8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1635d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1635dc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1635DCu;
    {
        const bool branch_taken_0x1635dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1635E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635DCu;
        // 0x1635e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635dc) {
            ctx->pc = 0x163614u;
            return;
        }
    }
    ctx->pc = 0x1635E4u;
    // 0x1635e4: 0xc055c40  jal         func_157100
    ctx->pc = 0x1635E4u;
    SET_GPR_U32(ctx, 31, 0x1635ECu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1635E4u, 0x1635ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635ECu;
label_1635ec:
    // 0x1635ec: 0xc601026c  lwc1        $f1, 0x26C($s0)
    ctx->pc = 0x1635ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1635f0: 0x3c023d1e  lui         $v0, 0x3D1E
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15646 << 16));
    // 0x1635f4: 0x3442611c  ori         $v0, $v0, 0x611C
    ctx->pc = 0x1635f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24860);
    // 0x1635f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1635f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1635fc: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x1635fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163600: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x163600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x163604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163608: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x163608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x16360c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16360Cu;
    {
        const bool branch_taken_0x16360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16360Cu;
        // 0x163610: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16360c) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x163614u;
}
