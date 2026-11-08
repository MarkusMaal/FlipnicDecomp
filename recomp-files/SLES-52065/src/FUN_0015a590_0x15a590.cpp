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

// Function: FUN_0015a590
// Address: 0x15a590 - 0x15a640
void FUN_0015a590_0x15a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a590_0x15a590");
#endif

    switch (ctx->pc) {
        case 0x15a5e4u: goto label_15a5e4;
        default: break;
    }

    ctx->pc = 0x15a590u;

    // 0x15a590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a594: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15a598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a59c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15a5a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a5a4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a5a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5b0: 0x848301f4  lh          $v1, 0x1F4($a0)
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x15a5b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5b8: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x15a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a5bc: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15a5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x15a5c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5c8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a5cc: 0x8c8401f0  lw          $a0, 0x1F0($a0)
    ctx->pc = 0x15a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x15a5d0: 0x0  nop
    ctx->pc = 0x15a5d0u;
    // NOP
    // 0x15a5d4: 0x1010  mfhi        $v0
    ctx->pc = 0x15a5d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a5d8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a5dc: 0xc054bd0  jal         func_152F40
    ctx->pc = 0x15A5DCu;
    SET_GPR_U32(ctx, 31, 0x15A5E4u);
    ctx->pc = 0x15A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5DCu;
    // 0x15a5e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F40u, 0x15A5DCu, 0x15A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5E4u;
label_15a5e4:
    // 0x15a5e4: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A5E4u;
    {
        const bool branch_taken_0x15a5e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15a5e4) {
            ctx->pc = 0x15A628u;
            goto label_15a628;
        }
    }
    ctx->pc = 0x15A5ECu;
    // 0x15a5ec: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a5f0: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x15a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a5f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a5f8: 0x0  nop
    ctx->pc = 0x15a5f8u;
    // NOP
    // 0x15a5fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15A5FCu;
    {
        const bool branch_taken_0x15a5fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5FCu;
        // 0x15a600: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5fc) {
            ctx->pc = 0x15A628u;
            goto label_15a628;
        }
    }
    ctx->pc = 0x15A604u;
    // 0x15a604: 0xe60102e4  swc1        $f1, 0x2E4($s0)
    ctx->pc = 0x15a604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x15a608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a60c: 0xae020338  sw          $v0, 0x338($s0)
    ctx->pc = 0x15a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x15a610: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15a614: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x15a618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a61c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A620u;
    {
        const bool branch_taken_0x15a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A620u;
        // 0x15a624: 0xae03033c  sw          $v1, 0x33C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a620) {
            ctx->pc = 0x15A62Cu;
            goto label_15a62c;
        }
    }
    ctx->pc = 0x15A628u;
label_15a628:
    // 0x15a628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a62c:
    // 0x15a62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a638: 0x3e00008  jr          $ra
    ctx->pc = 0x15A638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A638u;
        // 0x15a63c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A640u;
}
