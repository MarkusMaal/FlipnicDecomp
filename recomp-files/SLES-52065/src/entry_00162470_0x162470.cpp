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

// Function: entry_00162470
// Address: 0x162470 - 0x1624b0
void entry_00162470_0x162470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162470_0x162470");
#endif

    switch (ctx->pc) {
        case 0x1624a4u: goto label_1624a4;
        default: break;
    }

    ctx->pc = 0x162470u;

    // 0x162470: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162474: 0x12620067  beq         $s3, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x162474u;
    {
        const bool branch_taken_0x162474 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x162474) {
            ctx->pc = 0x162614u;
            return;
        }
    }
    ctx->pc = 0x16247Cu;
    // 0x16247c: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x16247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x162484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162488: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x16248c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x162490: 0x46141041  sub.s       $f1, $f2, $f20
    ctx->pc = 0x162490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x162494: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x162494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x162498: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x162498u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16249c: 0xc055cb4  jal         func_1572D0
    ctx->pc = 0x16249Cu;
    SET_GPR_U32(ctx, 31, 0x1624A4u);
    ctx->pc = 0x1624A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16249Cu;
    // 0x1624a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572D0u, 0x16249Cu, 0x1624A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624A4u;
label_1624a4:
    // 0x1624a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1624a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1624A8u;
    {
        const bool branch_taken_0x1624a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624A8u;
        // 0x1624ac: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624a8) {
            ctx->pc = 0x1624E8u;
            return;
        }
    }
    ctx->pc = 0x1624B0u;
}
