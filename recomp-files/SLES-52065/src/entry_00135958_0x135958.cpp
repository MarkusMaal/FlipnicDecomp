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

// Function: entry_00135958
// Address: 0x135958 - 0x13599c
void entry_00135958_0x135958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135958_0x135958");
#endif

    switch (ctx->pc) {
        case 0x135970u: goto label_135970;
        default: break;
    }

    ctx->pc = 0x135958u;

    // 0x135958: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135958) {
            ctx->pc = 0x1359E8u;
            return;
        }
    }
    ctx->pc = 0x135960u;
    // 0x135960: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135964: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x135968: 0xc061c0c  jal         func_187030
    ctx->pc = 0x135968u;
    SET_GPR_U32(ctx, 31, 0x135970u);
    ctx->pc = 0x13596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135968u;
    // 0x13596c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187030u, 0x135968u, 0x135970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135970u;
label_135970:
    // 0x135970: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x135970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135974: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x135978: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x135978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x13597c: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135988: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13598c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13598Cu;
    {
        const bool branch_taken_0x13598c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x135990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13598Cu;
        // 0x135990: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13598c) {
            ctx->pc = 0x13599Cu;
            return;
        }
    }
    ctx->pc = 0x135994u;
    // 0x135994: 0xc061b50  jal         func_186D40
    ctx->pc = 0x135994u;
    SET_GPR_U32(ctx, 31, 0x13599Cu);
    ctx->pc = 0x135998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135994u;
    // 0x135998: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x135994u, 0x13599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13599Cu;
}
