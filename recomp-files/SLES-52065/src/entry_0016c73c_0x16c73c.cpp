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

// Function: entry_0016c73c
// Address: 0x16c73c - 0x16c784
void entry_0016c73c_0x16c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c73c_0x16c73c");
#endif

    switch (ctx->pc) {
        case 0x16c754u: goto label_16c754;
        default: break;
    }

    ctx->pc = 0x16c73cu;

label_16c73c:
    // 0x16c73c: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x16c73cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
label_16c740:
    // 0x16c740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c744:
    // 0x16c744: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c748:
    // 0x16c748: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c74c:
    // 0x16c74c: 0x320f809  jalr        $t9
label_16c750:
    if (ctx->pc == 0x16C750u) {
        ctx->pc = 0x16C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C74Cu;
        // 0x16c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C754u;
        goto label_16c754;
    }
    ctx->pc = 0x16C74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C754u);
        ctx->pc = 0x16C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C74Cu;
        // 0x16c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C74Cu, 0x16C754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C754u;
label_16c754:
    // 0x16c754: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c758:
    // 0x16c758: 0xc620022c  lwc1        $f0, 0x22C($s1)
    ctx->pc = 0x16c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c75c:
    // 0x16c75c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c75cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16c760:
    // 0x16c760: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c760u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_16c764:
    // 0x16c764: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c768:
    // 0x16c768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16c76c:
    // 0x16c76c: 0x0  nop
    ctx->pc = 0x16c76cu;
    // NOP
label_16c770:
    // 0x16c770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c774:
    // 0x16c774: 0x0  nop
    ctx->pc = 0x16c774u;
    // NOP
label_16c778:
    // 0x16c778: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c77c:
    if (ctx->pc == 0x16C77Cu) {
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C780u;
        goto label_16c780;
    }
    ctx->pc = 0x16C778u;
    {
        const bool branch_taken_0x16c778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C778u;
        // 0x16c77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c778) {
            ctx->pc = 0x16C784u;
            return;
        }
    }
    ctx->pc = 0x16C780u;
label_16c780:
    // 0x16c780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16c784u;
}
