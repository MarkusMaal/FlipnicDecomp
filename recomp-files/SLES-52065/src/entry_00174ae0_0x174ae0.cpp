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

// Function: entry_00174ae0
// Address: 0x174ae0 - 0x174c08
void entry_00174ae0_0x174ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ae0_0x174ae0");
#endif

    switch (ctx->pc) {
        case 0x174afcu: goto label_174afc;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b58u: goto label_174b58;
        case 0x174b68u: goto label_174b68;
        case 0x174b78u: goto label_174b78;
        default: break;
    }

    ctx->pc = 0x174ae0u;

label_174ae0:
    // 0x174ae0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x174ae4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174ae8: 0x244219d0  addiu       $v0, $v0, 0x19D0
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6608));
    // 0x174aec: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x174aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174af0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174af4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174AF4u;
    SET_GPR_U32(ctx, 31, 0x174AFCu);
    ctx->pc = 0x174AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AF4u;
    // 0x174af8: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174AF4u, 0x174AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AFCu;
label_174afc:
    // 0x174afc: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x174afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x174b00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b04: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B04u;
    SET_GPR_U32(ctx, 31, 0x174B0Cu);
    ctx->pc = 0x174B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B04u;
    // 0x174b08: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B04u, 0x174B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B0Cu;
label_174b0c:
    // 0x174b0c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x174b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b14: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B14u;
    SET_GPR_U32(ctx, 31, 0x174B1Cu);
    ctx->pc = 0x174B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B14u;
    // 0x174b18: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B14u, 0x174B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B1Cu;
label_174b1c:
    // 0x174b1c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x174b20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b24: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B24u;
    SET_GPR_U32(ctx, 31, 0x174B2Cu);
    ctx->pc = 0x174B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B24u;
    // 0x174b28: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B24u, 0x174B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B2Cu;
label_174b2c:
    // 0x174b2c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x174b30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b34: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B34u;
    SET_GPR_U32(ctx, 31, 0x174B3Cu);
    ctx->pc = 0x174B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B34u;
    // 0x174b38: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B34u, 0x174B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x174b40: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174b44: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x174b48: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174b4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b50: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B50u;
    SET_GPR_U32(ctx, 31, 0x174B58u);
    ctx->pc = 0x174B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B50u;
    // 0x174b54: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B50u, 0x174B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B58u;
label_174b58:
    // 0x174b58: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x174b5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b60: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B60u;
    SET_GPR_U32(ctx, 31, 0x174B68u);
    ctx->pc = 0x174B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B60u;
    // 0x174b64: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B60u, 0x174B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x174b6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b70: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B70u;
    SET_GPR_U32(ctx, 31, 0x174B78u);
    ctx->pc = 0x174B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B70u;
    // 0x174b74: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B70u, 0x174B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B78u;
label_174b78:
    // 0x174b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174b7c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x174b80: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174B80u;
    {
        const bool branch_taken_0x174b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B80u;
        // 0x174b84: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b80) {
            ctx->pc = 0x174AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174ae0;
        }
    }
    ctx->pc = 0x174B88u;
    // 0x174b88: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174b8c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x174b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x174b90: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x174b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x174b94: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174b98: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x174b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x174b9c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x174b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x174ba0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174ba4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x174ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x174ba8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x174ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x174bac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bb0: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x174bb4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x174bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x174bb8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bbc: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x174bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x174bc0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x174bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x174bc4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bc8: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x174bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x174bcc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x174bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x174bd0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bd4: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x174bd8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x174bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x174bdc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174be0: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x174be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x174be4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x174be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x174be8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x174be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174bec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c00: 0x3e00008  jr          $ra
    ctx->pc = 0x174C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C00u;
        // 0x174c04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C08u;
}
