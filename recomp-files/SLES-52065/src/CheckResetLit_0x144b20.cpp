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

// Function: CheckResetLit
// Address: 0x144b20 - 0x144c90
void CheckResetLit_0x144b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckResetLit_0x144b20");
#endif

    switch (ctx->pc) {
        case 0x144b58u: goto label_144b58;
        case 0x144b7cu: goto label_144b7c;
        case 0x144ba0u: goto label_144ba0;
        case 0x144bccu: goto label_144bcc;
        case 0x144bf4u: goto label_144bf4;
        case 0x144c14u: goto label_144c14;
        case 0x144c34u: goto label_144c34;
        case 0x144c54u: goto label_144c54;
        case 0x144c74u: goto label_144c74;
        default: break;
    }

    ctx->pc = 0x144b20u;

    // 0x144b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144b28: 0x838285cc  lb          $v0, -0x7A34($gp)
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936012)));
    // 0x144b2c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x144B2Cu;
    {
        const bool branch_taken_0x144b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B2Cu;
        // 0x144b30: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b2c) {
            ctx->pc = 0x144C7Cu;
            goto label_144c7c;
        }
    }
    ctx->pc = 0x144B34u;
    // 0x144b34: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x144b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x144b38: 0x24427030  addiu       $v0, $v0, 0x7030
    ctx->pc = 0x144b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28720));
    // 0x144b3c: 0x246392d8  addiu       $v1, $v1, -0x6D28
    ctx->pc = 0x144b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939352));
    // 0x144b40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x144b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x144b44: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x144b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144b48: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x144b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x144b4c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x144b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144b50: 0xc04cfbc  jal         func_133EF0
    ctx->pc = 0x144B50u;
    SET_GPR_U32(ctx, 31, 0x144B58u);
    ctx->pc = 0x144B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B50u;
    // 0x144b54: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133EF0u, 0x144B50u, 0x144B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B58u;
label_144b58:
    // 0x144b58: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x144b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144b5c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x144b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x144b60: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x144b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x144b64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x144b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144b68: 0x0  nop
    ctx->pc = 0x144b68u;
    // NOP
    // 0x144b6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x144b6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x144b70: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x144b70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x144b74: 0xc04d028  jal         func_1340A0
    ctx->pc = 0x144B74u;
    SET_GPR_U32(ctx, 31, 0x144B7Cu);
    ctx->pc = 0x144B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B74u;
    // 0x144b78: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340A0u, 0x144B74u, 0x144B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B7Cu;
label_144b7c:
    // 0x144b7c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144b80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x144b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x144b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144b90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144b94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x144b94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x144b98: 0xc04d00c  jal         func_134030
    ctx->pc = 0x144B98u;
    SET_GPR_U32(ctx, 31, 0x144BA0u);
    ctx->pc = 0x144B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B98u;
    // 0x144b9c: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134030u, 0x144B98u, 0x144BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BA0u;
label_144ba0:
    // 0x144ba0: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x144ba4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x144ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144ba8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x144ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x144bac: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x144bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x144bb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144bb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144bb8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x144bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x144bbc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x144bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x144bc0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144bc4: 0xc04d00c  jal         func_134030
    ctx->pc = 0x144BC4u;
    SET_GPR_U32(ctx, 31, 0x144BCCu);
    ctx->pc = 0x144BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BC4u;
    // 0x144bc8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134030u, 0x144BC4u, 0x144BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BCCu;
label_144bcc:
    // 0x144bcc: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x144bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x144bd0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x144bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144bd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144bd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x144bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144bdc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x144bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x144be0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x144be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x144be4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x144be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x144be8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144bec: 0xc04d00c  jal         func_134030
    ctx->pc = 0x144BECu;
    SET_GPR_U32(ctx, 31, 0x144BF4u);
    ctx->pc = 0x144BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BECu;
    // 0x144bf0: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134030u, 0x144BECu, 0x144BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BF4u;
label_144bf4:
    // 0x144bf4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x144bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144bfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x144c04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x144c08: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x144c08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x144c0c: 0xc04d020  jal         func_134080
    ctx->pc = 0x144C0Cu;
    SET_GPR_U32(ctx, 31, 0x144C14u);
    ctx->pc = 0x144C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C0Cu;
    // 0x144c10: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134080u, 0x144C0Cu, 0x144C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C14u;
label_144c14:
    // 0x144c14: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x144c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144c18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x144c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x144c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144c24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x144c24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x144c28: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x144c28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x144c2c: 0xc04d020  jal         func_134080
    ctx->pc = 0x144C2Cu;
    SET_GPR_U32(ctx, 31, 0x144C34u);
    ctx->pc = 0x144C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C2Cu;
    // 0x144c30: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134080u, 0x144C2Cu, 0x144C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C34u;
label_144c34:
    // 0x144c34: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144c38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x144c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x144c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144c40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x144c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144c44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x144c44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x144c48: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x144c48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x144c4c: 0xc04d020  jal         func_134080
    ctx->pc = 0x144C4Cu;
    SET_GPR_U32(ctx, 31, 0x144C54u);
    ctx->pc = 0x144C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C4Cu;
    // 0x144c50: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134080u, 0x144C4Cu, 0x144C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C54u;
label_144c54:
    // 0x144c54: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x144c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144c58: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x144c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x144c5c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x144c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x144c60: 0x24a548a0  addiu       $a1, $a1, 0x48A0
    ctx->pc = 0x144c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18592));
    // 0x144c64: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x144c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x144c68: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x144c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x144c6c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x144C6Cu;
    SET_GPR_U32(ctx, 31, 0x144C74u);
    ctx->pc = 0x144C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C6Cu;
    // 0x144c70: 0x24c67020  addiu       $a2, $a2, 0x7020 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x144C6Cu, 0x144C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C74u;
label_144c74:
    // 0x144c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144c78: 0xa38285cc  sb          $v0, -0x7A34($gp)
    ctx->pc = 0x144c78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936012), (uint8_t)GPR_U32(ctx, 2));
label_144c7c:
    // 0x144c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144c80: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x144c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x144c84: 0x24427030  addiu       $v0, $v0, 0x7030
    ctx->pc = 0x144c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28720));
    // 0x144c88: 0x3e00008  jr          $ra
    ctx->pc = 0x144C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C88u;
        // 0x144c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C90u;
}
