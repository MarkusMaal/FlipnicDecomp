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

// Function: entry_00101ac8
// Address: 0x101ac8 - 0x101c8c
void entry_00101ac8_0x101ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ac8_0x101ac8");
#endif

    switch (ctx->pc) {
        case 0x101ad0u: goto label_101ad0;
        case 0x101b08u: goto label_101b08;
        case 0x101b18u: goto label_101b18;
        case 0x101b44u: goto label_101b44;
        case 0x101b78u: goto label_101b78;
        case 0x101bacu: goto label_101bac;
        default: break;
    }

    ctx->pc = 0x101ac8u;

    // 0x101ac8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x101AC8u;
    SET_GPR_U32(ctx, 31, 0x101AD0u);
    ctx->pc = 0x101ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AC8u;
    // 0x101acc: 0x240407c0  addiu       $a0, $zero, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101AC8u, 0x101AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AD0u;
label_101ad0:
    // 0x101ad0: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x101AD0u;
    {
        const bool branch_taken_0x101ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101ad0) {
            ctx->pc = 0x101C8Cu;
            return;
        }
    }
    ctx->pc = 0x101AD8u;
    // 0x101ad8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x101ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x101adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ae0: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x101ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x101ae4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101ae8: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x101ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x101aec: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101af0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x101af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x101af4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101af8: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x101af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x101afc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b00: 0xc06c56c  jal         func_1B15B0
    ctx->pc = 0x101B00u;
    SET_GPR_U32(ctx, 31, 0x101B08u);
    ctx->pc = 0x101B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B00u;
    // 0x101b04: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B15B0u, 0x101B00u, 0x101B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B08u;
label_101b08:
    // 0x101b08: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101b10: 0xc06c56c  jal         func_1B15B0
    ctx->pc = 0x101B10u;
    SET_GPR_U32(ctx, 31, 0x101B18u);
    ctx->pc = 0x101B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B10u;
    // 0x101b14: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B15B0u, 0x101B10u, 0x101B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B18u;
label_101b18:
    // 0x101b18: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b1c: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x101b20: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
    // 0x101b24: 0xa04002f0  sb          $zero, 0x2F0($v0)
    ctx->pc = 0x101b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 752), (uint8_t)GPR_U32(ctx, 0));
    // 0x101b28: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b2c: 0xa04002f1  sb          $zero, 0x2F1($v0)
    ctx->pc = 0x101b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 753), (uint8_t)GPR_U32(ctx, 0));
    // 0x101b30: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b34: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x101b34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
    // 0x101b38: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b3c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x101B3Cu;
    SET_GPR_U32(ctx, 31, 0x101B44u);
    ctx->pc = 0x101B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B3Cu;
    // 0x101b40: 0x24440310  addiu       $a0, $v0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101B3Cu, 0x101B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B44u;
label_101b44:
    // 0x101b44: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b48: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x101b4c: 0x24637910  addiu       $v1, $v1, 0x7910
    ctx->pc = 0x101b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30992));
    // 0x101b50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101b54: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x101b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x101b58: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x101b5c: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
    // 0x101b60: 0xace303b4  sw          $v1, 0x3B4($a3)
    ctx->pc = 0x101b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 3));
    // 0x101b64: 0x24e303b0  addiu       $v1, $a3, 0x3B0
    ctx->pc = 0x101b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 944));
    // 0x101b68: 0xa0e003b0  sb          $zero, 0x3B0($a3)
    ctx->pc = 0x101b68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 944), (uint8_t)GPR_U32(ctx, 0));
    // 0x101b6c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x101b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x101b70: 0xc0621c0  jal         func_188700
    ctx->pc = 0x101B70u;
    SET_GPR_U32(ctx, 31, 0x101B78u);
    ctx->pc = 0x101B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B70u;
    // 0x101b74: 0xace203b4  sw          $v0, 0x3B4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101B70u, 0x101B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B78u;
label_101b78:
    // 0x101b78: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101b7c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x101b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x101b80: 0x24637910  addiu       $v1, $v1, 0x7910
    ctx->pc = 0x101b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30992));
    // 0x101b84: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101b88: 0x2442b8b0  addiu       $v0, $v0, -0x4750
    ctx->pc = 0x101b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949040));
    // 0x101b8c: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x101b90: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
    // 0x101b94: 0xace30574  sw          $v1, 0x574($a3)
    ctx->pc = 0x101b94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1396), GPR_U32(ctx, 3));
    // 0x101b98: 0x24e30570  addiu       $v1, $a3, 0x570
    ctx->pc = 0x101b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1392));
    // 0x101b9c: 0xa0e00570  sb          $zero, 0x570($a3)
    ctx->pc = 0x101b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1392), (uint8_t)GPR_U32(ctx, 0));
    // 0x101ba0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x101ba4: 0xc0621c0  jal         func_188700
    ctx->pc = 0x101BA4u;
    SET_GPR_U32(ctx, 31, 0x101BACu);
    ctx->pc = 0x101BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BA4u;
    // 0x101ba8: 0xace20574  sw          $v0, 0x574($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 1396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101BA4u, 0x101BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BACu;
label_101bac:
    // 0x101bac: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101bb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x101bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x101bb4: 0x24427910  addiu       $v0, $v0, 0x7910
    ctx->pc = 0x101bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30992));
    // 0x101bb8: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
    // 0x101bbc: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x101bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x101bc0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x101bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x101bc4: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x101bc8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x101bcc: 0x2508b890  addiu       $t0, $t0, -0x4770
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949008));
    // 0x101bd0: 0x24e7b870  addiu       $a3, $a3, -0x4790
    ctx->pc = 0x101bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948976));
    // 0x101bd4: 0x24c6b850  addiu       $a2, $a2, -0x47B0
    ctx->pc = 0x101bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948944));
    // 0x101bd8: 0x24a5b830  addiu       $a1, $a1, -0x47D0
    ctx->pc = 0x101bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948912));
    // 0x101bdc: 0xac820734  sw          $v0, 0x734($a0)
    ctx->pc = 0x101bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1844), GPR_U32(ctx, 2));
    // 0x101be0: 0x2463b810  addiu       $v1, $v1, -0x47F0
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
    // 0x101be4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101be8: 0xa0800730  sb          $zero, 0x730($a0)
    ctx->pc = 0x101be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1840), (uint8_t)GPR_U32(ctx, 0));
    // 0x101bec: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101bf0: 0xac880734  sw          $t0, 0x734($a0)
    ctx->pc = 0x101bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1844), GPR_U32(ctx, 8));
    // 0x101bf4: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x101bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101bf8: 0x25040310  addiu       $a0, $t0, 0x310
    ctx->pc = 0x101bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 784));
    // 0x101bfc: 0xad040738  sw          $a0, 0x738($t0)
    ctx->pc = 0x101bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1848), GPR_U32(ctx, 4));
    // 0x101c00: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c04: 0xac820744  sw          $v0, 0x744($a0)
    ctx->pc = 0x101c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1860), GPR_U32(ctx, 2));
    // 0x101c08: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c0c: 0xa0800740  sb          $zero, 0x740($a0)
    ctx->pc = 0x101c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1856), (uint8_t)GPR_U32(ctx, 0));
    // 0x101c10: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c14: 0xac870744  sw          $a3, 0x744($a0)
    ctx->pc = 0x101c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1860), GPR_U32(ctx, 7));
    // 0x101c18: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c1c: 0x24e40310  addiu       $a0, $a3, 0x310
    ctx->pc = 0x101c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 784));
    // 0x101c20: 0xace40748  sw          $a0, 0x748($a3)
    ctx->pc = 0x101c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1864), GPR_U32(ctx, 4));
    // 0x101c24: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c28: 0xac82075c  sw          $v0, 0x75C($a0)
    ctx->pc = 0x101c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1884), GPR_U32(ctx, 2));
    // 0x101c2c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c30: 0xa0800758  sb          $zero, 0x758($a0)
    ctx->pc = 0x101c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1880), (uint8_t)GPR_U32(ctx, 0));
    // 0x101c34: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c38: 0xac86075c  sw          $a2, 0x75C($a0)
    ctx->pc = 0x101c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1884), GPR_U32(ctx, 6));
    // 0x101c3c: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x101c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c40: 0x24c40310  addiu       $a0, $a2, 0x310
    ctx->pc = 0x101c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
    // 0x101c44: 0xacc40760  sw          $a0, 0x760($a2)
    ctx->pc = 0x101c44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1888), GPR_U32(ctx, 4));
    // 0x101c48: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c4c: 0xac820778  sw          $v0, 0x778($a0)
    ctx->pc = 0x101c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1912), GPR_U32(ctx, 2));
    // 0x101c50: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c54: 0xa0800774  sb          $zero, 0x774($a0)
    ctx->pc = 0x101c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1908), (uint8_t)GPR_U32(ctx, 0));
    // 0x101c58: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c5c: 0xac850778  sw          $a1, 0x778($a0)
    ctx->pc = 0x101c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1912), GPR_U32(ctx, 5));
    // 0x101c60: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x101c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c64: 0x24a40310  addiu       $a0, $a1, 0x310
    ctx->pc = 0x101c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
    // 0x101c68: 0xaca4077c  sw          $a0, 0x77C($a1)
    ctx->pc = 0x101c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1916), GPR_U32(ctx, 4));
    // 0x101c6c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c70: 0xac8207b4  sw          $v0, 0x7B4($a0)
    ctx->pc = 0x101c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 2));
    // 0x101c74: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c78: 0xa04007b0  sb          $zero, 0x7B0($v0)
    ctx->pc = 0x101c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1968), (uint8_t)GPR_U32(ctx, 0));
    // 0x101c7c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c80: 0xac4307b4  sw          $v1, 0x7B4($v0)
    ctx->pc = 0x101c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 3));
    // 0x101c84: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x101c88: 0x0  nop
    ctx->pc = 0x101c88u;
    // NOP
    ctx->pc = 0x101c8cu;
}
