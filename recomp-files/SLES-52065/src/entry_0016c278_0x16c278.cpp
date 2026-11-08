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

// Function: entry_0016c278
// Address: 0x16c278 - 0x16c2a4
void entry_0016c278_0x16c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c278_0x16c278");
#endif

    switch (ctx->pc) {
        case 0x16c284u: goto label_16c284;
        default: break;
    }

    ctx->pc = 0x16c278u;

    // 0x16c278: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x16c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16c27c: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x16C27Cu;
    SET_GPR_U32(ctx, 31, 0x16C284u);
    ctx->pc = 0x16C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C27Cu;
    // 0x16c280: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x16C27Cu, 0x16C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C284u;
label_16c284:
    // 0x16c284: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x16c288: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16c28c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16c290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16c290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16c294: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16c294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c29c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C29Cu;
    {
        const bool branch_taken_0x16c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C29Cu;
        // 0x16c2a0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c29c) {
            ctx->pc = 0x16C2A8u;
            return;
        }
    }
    ctx->pc = 0x16C2A4u;
}
