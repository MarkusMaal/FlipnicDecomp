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

// Function: entry_00135394
// Address: 0x135394 - 0x1353dc
void entry_00135394_0x135394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135394_0x135394");
#endif

    switch (ctx->pc) {
        case 0x1353acu: goto label_1353ac;
        case 0x1353d8u: goto label_1353d8;
        default: break;
    }

    ctx->pc = 0x135394u;

    // 0x135394: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x135394u;
    {
        const bool branch_taken_0x135394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135394) {
            ctx->pc = 0x135464u;
            return;
        }
    }
    ctx->pc = 0x13539Cu;
    // 0x13539c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x13539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1353a0: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1353a4: 0xc061bd0  jal         func_186F40
    ctx->pc = 0x1353A4u;
    SET_GPR_U32(ctx, 31, 0x1353ACu);
    ctx->pc = 0x1353A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353A4u;
    // 0x1353a8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x1353A4u, 0x1353ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353ACu;
label_1353ac:
    // 0x1353ac: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x1353acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1353b0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1353b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1353b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1353b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1353b8: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1353bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1353bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1353c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1353c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1353c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1353c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1353c8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1353C8u;
    {
        const bool branch_taken_0x1353c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1353CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353C8u;
        // 0x1353cc: 0xe46000e8  swc1        $f0, 0xE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353c8) {
            ctx->pc = 0x1353DCu;
            return;
        }
    }
    ctx->pc = 0x1353D0u;
    // 0x1353d0: 0xc061b50  jal         func_186D40
    ctx->pc = 0x1353D0u;
    SET_GPR_U32(ctx, 31, 0x1353D8u);
    ctx->pc = 0x1353D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353D0u;
    // 0x1353d4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x1353D0u, 0x1353D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353D8u;
label_1353d8:
    // 0x1353d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1353d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1353dcu;
}
