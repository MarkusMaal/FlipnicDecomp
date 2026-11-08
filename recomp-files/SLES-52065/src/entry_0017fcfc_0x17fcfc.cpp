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

// Function: entry_0017fcfc
// Address: 0x17fcfc - 0x17fd3c
void entry_0017fcfc_0x17fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fcfc_0x17fcfc");
#endif

    switch (ctx->pc) {
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd24u: goto label_17fd24;
        default: break;
    }

    ctx->pc = 0x17fcfcu;

    // 0x17fcfc: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x17FCFCu;
    SET_GPR_U32(ctx, 31, 0x17FD04u);
    ctx->pc = 0x17FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCFCu;
    // 0x17fd00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x17FCFCu, 0x17FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD04u;
label_17fd04:
    // 0x17fd04: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fd08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17fd0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD0Cu;
    {
        const bool branch_taken_0x17fd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD0Cu;
        // 0x17fd10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd0c) {
            ctx->pc = 0x17FD3Cu;
            return;
        }
    }
    ctx->pc = 0x17FD14u;
    // 0x17fd14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17fd18: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17fd1c: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FD1Cu;
    SET_GPR_U32(ctx, 31, 0x17FD24u);
    ctx->pc = 0x17FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD1Cu;
    // 0x17fd20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FD1Cu, 0x17FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD24u;
label_17fd24:
    // 0x17fd24: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x17fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd28: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x17fd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x17fd2c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x17fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd30: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x17fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x17fd34: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x17fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd38: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x17fd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    ctx->pc = 0x17fd3cu;
}
