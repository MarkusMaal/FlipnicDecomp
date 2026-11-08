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

// Function: entry_0012f3f8
// Address: 0x12f3f8 - 0x12f44c
void entry_0012f3f8_0x12f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f3f8_0x12f3f8");
#endif

    switch (ctx->pc) {
        case 0x12f40cu: goto label_12f40c;
        case 0x12f414u: goto label_12f414;
        case 0x12f424u: goto label_12f424;
        default: break;
    }

    ctx->pc = 0x12f3f8u;

    // 0x12f3f8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F3F8u;
    {
        const bool branch_taken_0x12f3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3F8u;
        // 0x12f3fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3f8) {
            ctx->pc = 0x12F44Cu;
            return;
        }
    }
    ctx->pc = 0x12F400u;
    // 0x12f400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f404: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x12F404u;
    SET_GPR_U32(ctx, 31, 0x12F40Cu);
    ctx->pc = 0x12F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F404u;
    // 0x12f408: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x12F404u, 0x12F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F40Cu;
label_12f40c:
    // 0x12f40c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x12F40Cu;
    SET_GPR_U32(ctx, 31, 0x12F414u);
    ctx->pc = 0x12F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F40Cu;
    // 0x12f410: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x12F40Cu, 0x12F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F414u;
label_12f414:
    // 0x12f414: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x12f414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x12f418: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12f418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12f41c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x12F41Cu;
    SET_GPR_U32(ctx, 31, 0x12F424u);
    ctx->pc = 0x12F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F41Cu;
    // 0x12f420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x12F41Cu, 0x12F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f428: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x12f428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x12f42c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12f430: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x12f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f434: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x12f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f438: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x12f438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x12f43c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x12f43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12f440: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x12f440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x12f444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12F444u;
    {
        const bool branch_taken_0x12f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F444u;
        // 0x12f448: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f444) {
            ctx->pc = 0x12F460u;
            return;
        }
    }
    ctx->pc = 0x12F44Cu;
}
