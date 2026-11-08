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

// Function: entry_001525b4
// Address: 0x1525b4 - 0x1525f8
void entry_001525b4_0x1525b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001525b4_0x1525b4");
#endif

    switch (ctx->pc) {
        case 0x1525c0u: goto label_1525c0;
        case 0x1525d0u: goto label_1525d0;
        default: break;
    }

    ctx->pc = 0x1525b4u;

    // 0x1525b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525b8: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x1525B8u;
    SET_GPR_U32(ctx, 31, 0x1525C0u);
    ctx->pc = 0x1525BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525B8u;
    // 0x1525bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x1525B8u, 0x1525C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525C0u;
label_1525c0:
    // 0x1525c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1525c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1525c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1525c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525c8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1525C8u;
    SET_GPR_U32(ctx, 31, 0x1525D0u);
    ctx->pc = 0x1525CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525C8u;
    // 0x1525cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1525C8u, 0x1525D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525D0u;
label_1525d0:
    // 0x1525d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1525d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1525d4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1525d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1525d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1525d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1525dc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1525dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1525e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1525e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1525e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1525e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1525e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1525e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1525ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1525ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1525f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1525F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1525F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525F0u;
        // 0x1525f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1525F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1525F8u;
}
