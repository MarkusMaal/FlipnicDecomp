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

// Function: entry_00165970
// Address: 0x165970 - 0x1659c0
void entry_00165970_0x165970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165970_0x165970");
#endif

    switch (ctx->pc) {
        case 0x165998u: goto label_165998;
        default: break;
    }

    ctx->pc = 0x165970u;

    // 0x165970: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x165970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x165974: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x165974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x165978: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16597c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x165980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165988: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x165988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16598c: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x16598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165990: 0xc056194  jal         func_158650
    ctx->pc = 0x165990u;
    SET_GPR_U32(ctx, 31, 0x165998u);
    ctx->pc = 0x165994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165990u;
    // 0x165994: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x165990u, 0x165998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165998u;
label_165998:
    // 0x165998: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x16599c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16599Cu;
    {
        const bool branch_taken_0x16599c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16599c) {
            ctx->pc = 0x1659C0u;
            return;
        }
    }
    ctx->pc = 0x1659A4u;
    // 0x1659a4: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x1659a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1659A8u;
    {
        const bool branch_taken_0x1659a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659A8u;
        // 0x1659ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659a8) {
            ctx->pc = 0x1659C0u;
            return;
        }
    }
    ctx->pc = 0x1659B0u;
    // 0x1659b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1659b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659b4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x1659b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
    // 0x1659b8: 0xc042118  jal         func_108460
    ctx->pc = 0x1659B8u;
    SET_GPR_U32(ctx, 31, 0x1659C0u);
    ctx->pc = 0x1659BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659B8u;
    // 0x1659bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1659B8u, 0x1659C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659C0u;
}
