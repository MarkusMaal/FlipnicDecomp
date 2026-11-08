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

// Function: entry_001633ec
// Address: 0x1633ec - 0x163440
void entry_001633ec_0x1633ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633ec_0x1633ec");
#endif

    switch (ctx->pc) {
        case 0x1633f4u: goto label_1633f4;
        case 0x163400u: goto label_163400;
        default: break;
    }

    ctx->pc = 0x1633ecu;

    // 0x1633ec: 0xc042118  jal         func_108460
    ctx->pc = 0x1633ECu;
    SET_GPR_U32(ctx, 31, 0x1633F4u);
    ctx->pc = 0x1633F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633ECu;
    // 0x1633f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1633ECu, 0x1633F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1633f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633f8: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1633F8u;
    SET_GPR_U32(ctx, 31, 0x163400u);
    ctx->pc = 0x1633FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633F8u;
    // 0x1633fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1633F8u, 0x163400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163400u;
label_163400:
    // 0x163400: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x163404: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x163404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x163408: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16340c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163410: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x163410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163414: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x163414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x163418: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x16341c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x16341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163420: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x163420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x163424: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x163428: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x163428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16342c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x163430: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x163434: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x163434u;
    {
        const bool branch_taken_0x163434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163434u;
        // 0x163438: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163434) {
            ctx->pc = 0x163440u;
            return;
        }
    }
    ctx->pc = 0x16343Cu;
    // 0x16343c: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x16343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    ctx->pc = 0x163440u;
}
