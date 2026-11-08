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

// Function: FUN_00125cc0
// Address: 0x125cc0 - 0x125d7c
void FUN_00125cc0_0x125cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125cc0_0x125cc0");
#endif

    switch (ctx->pc) {
        case 0x125cd8u: goto label_125cd8;
        case 0x125d10u: goto label_125d10;
        case 0x125d34u: goto label_125d34;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d48u: goto label_125d48;
        case 0x125d60u: goto label_125d60;
        case 0x125d68u: goto label_125d68;
        default: break;
    }

    ctx->pc = 0x125cc0u;

    // 0x125cc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x125cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125cd0: 0xc061918  jal         func_186460
    ctx->pc = 0x125CD0u;
    SET_GPR_U32(ctx, 31, 0x125CD8u);
    ctx->pc = 0x125CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CD0u;
    // 0x125cd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x125CD0u, 0x125CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CD8u;
label_125cd8:
    // 0x125cd8: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x125cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ce0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x125ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x125ce4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x125ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x125ce8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x125ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125cec: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x125cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x125cf0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x125cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x125cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125cf8: 0x0  nop
    ctx->pc = 0x125cf8u;
    // NOP
    // 0x125cfc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x125cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x125d00: 0x0  nop
    ctx->pc = 0x125d00u;
    // NOP
    // 0x125d04: 0x0  nop
    ctx->pc = 0x125d04u;
    // NOP
    // 0x125d08: 0xc07eede  jal         func_1FBB78
    ctx->pc = 0x125D08u;
    SET_GPR_U32(ctx, 31, 0x125D10u);
    ctx->pc = 0x1FBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB78u, 0x125D08u, 0x125D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D10u;
label_125d10:
    // 0x125d10: 0x3c02440c  lui         $v0, 0x440C
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17420 << 16));
    // 0x125d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125d1c: 0x0  nop
    ctx->pc = 0x125d1cu;
    // NOP
    // 0x125d20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x125d20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x125d24: 0x0  nop
    ctx->pc = 0x125d24u;
    // NOP
    // 0x125d28: 0x0  nop
    ctx->pc = 0x125d28u;
    // NOP
    // 0x125d2c: 0xc061a28  jal         func_1868A0
    ctx->pc = 0x125D2Cu;
    SET_GPR_U32(ctx, 31, 0x125D34u);
    ctx->pc = 0x1868A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A0u, 0x125D2Cu, 0x125D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D34u;
label_125d34:
    // 0x125d34: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x125D34u;
    SET_GPR_U32(ctx, 31, 0x125D3Cu);
    ctx->pc = 0x125D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D34u;
    // 0x125d38: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x125D34u, 0x125D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D3Cu;
label_125d3c:
    // 0x125d3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x125d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x125d40: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x125D40u;
    SET_GPR_U32(ctx, 31, 0x125D48u);
    ctx->pc = 0x125D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D40u;
    // 0x125d44: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x125D40u, 0x125D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D48u;
label_125d48:
    // 0x125d48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x125d4c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x125d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125d50: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x125d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x125d54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x125d58: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x125D58u;
    SET_GPR_U32(ctx, 31, 0x125D60u);
    ctx->pc = 0x125D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D58u;
    // 0x125d5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x125D58u, 0x125D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D60u;
label_125d60:
    // 0x125d60: 0xc061b74  jal         func_186DD0
    ctx->pc = 0x125D60u;
    SET_GPR_U32(ctx, 31, 0x125D68u);
    ctx->pc = 0x125D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D60u;
    // 0x125d64: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186DD0u, 0x125D60u, 0x125D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D68u;
label_125d68:
    // 0x125d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125d74: 0x3e00008  jr          $ra
    ctx->pc = 0x125D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D74u;
        // 0x125d78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125D7Cu;
}
