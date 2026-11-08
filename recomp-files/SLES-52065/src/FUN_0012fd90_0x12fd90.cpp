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

// Function: FUN_0012fd90
// Address: 0x12fd90 - 0x12ffe4
void FUN_0012fd90_0x12fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fd90_0x12fd90");
#endif

    switch (ctx->pc) {
        case 0x12fdc0u: goto label_12fdc0;
        case 0x12fdd8u: goto label_12fdd8;
        case 0x12ffa4u: goto label_12ffa4;
        case 0x12ffb0u: goto label_12ffb0;
        case 0x12ffb8u: goto label_12ffb8;
        case 0x12ffc0u: goto label_12ffc0;
        case 0x12ffc8u: goto label_12ffc8;
        case 0x12ffd0u: goto label_12ffd0;
        case 0x12ffd8u: goto label_12ffd8;
        default: break;
    }

    ctx->pc = 0x12fd90u;

    // 0x12fd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fd94: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x12fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x12fd98: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x12fd9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fda0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x12fda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x12fda4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x12fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x12fda8: 0xac209020  sw          $zero, -0x6FE0($at)
    ctx->pc = 0x12fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938656), GPR_U32(ctx, 0));
    // 0x12fdac: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x12fdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x12fdb0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x12fdb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdb8: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x12FDB8u;
    SET_GPR_U32(ctx, 31, 0x12FDC0u);
    ctx->pc = 0x12FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDB8u;
    // 0x12fdbc: 0xac229030  sw          $v0, -0x6FD0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x12FDB8u, 0x12FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC0u;
label_12fdc0:
    // 0x12fdc0: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x12fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x12fdc4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x12fdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x12fdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdcc: 0xac229000  sw          $v0, -0x7000($at)
    ctx->pc = 0x12fdccu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 2));
    // 0x12fdd0: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x12FDD0u;
    SET_GPR_U32(ctx, 31, 0x12FDD8u);
    ctx->pc = 0x12FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD0u;
    // 0x12fdd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x12FDD0u, 0x12FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fddc: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x12fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)0 << 16));
    // 0x12fde0: 0x24630e40  addiu       $v1, $v1, 0xE40
    ctx->pc = 0x12fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3648));
    // 0x12fde4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x12fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x12fde8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdf0: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fdf4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fdf8: 0x24630410  addiu       $v1, $v1, 0x410
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1040));
    // 0x12fdfc: 0xaf8484b8  sw          $a0, -0x7B48($gp)
    ctx->pc = 0x12fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935736), GPR_U32(ctx, 4));
    // 0x12fe00: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe04: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fe08: 0xaf8384bc  sw          $v1, -0x7B44($gp)
    ctx->pc = 0x12fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935740), GPR_U32(ctx, 3));
    // 0x12fe0c: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe10: 0x24630c70  addiu       $v1, $v1, 0xC70
    ctx->pc = 0x12fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3184));
    // 0x12fe14: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe18: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe1c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fe20: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x12fe24: 0xaf8484c0  sw          $a0, -0x7B40($gp)
    ctx->pc = 0x12fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935744), GPR_U32(ctx, 4));
    // 0x12fe28: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe2c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fe30: 0xaf8384c4  sw          $v1, -0x7B3C($gp)
    ctx->pc = 0x12fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935748), GPR_U32(ctx, 3));
    // 0x12fe34: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe38: 0x24630960  addiu       $v1, $v1, 0x960
    ctx->pc = 0x12fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x12fe3c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe40: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe44: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fe48: 0x24633298  addiu       $v1, $v1, 0x3298
    ctx->pc = 0x12fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12952));
    // 0x12fe4c: 0xaf8484c8  sw          $a0, -0x7B38($gp)
    ctx->pc = 0x12fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 4));
    // 0x12fe50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe54: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fe58: 0xaf8384cc  sw          $v1, -0x7B34($gp)
    ctx->pc = 0x12fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935756), GPR_U32(ctx, 3));
    // 0x12fe5c: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe60: 0x24632c38  addiu       $v1, $v1, 0x2C38
    ctx->pc = 0x12fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11320));
    // 0x12fe64: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe68: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe6c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fe70: 0x24632560  addiu       $v1, $v1, 0x2560
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9568));
    // 0x12fe74: 0xaf8484d0  sw          $a0, -0x7B30($gp)
    ctx->pc = 0x12fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 4));
    // 0x12fe78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe7c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fe80: 0xaf8384d4  sw          $v1, -0x7B2C($gp)
    ctx->pc = 0x12fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935764), GPR_U32(ctx, 3));
    // 0x12fe84: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe88: 0x24632f80  addiu       $v1, $v1, 0x2F80
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12160));
    // 0x12fe8c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fe90: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fe94: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fe98: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x12fe9c: 0xaf8484d8  sw          $a0, -0x7B28($gp)
    ctx->pc = 0x12fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935768), GPR_U32(ctx, 4));
    // 0x12fea0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fea4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fea8: 0xaf8384dc  sw          $v1, -0x7B24($gp)
    ctx->pc = 0x12fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935772), GPR_U32(ctx, 3));
    // 0x12feac: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12feb0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x12feb4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12feb8: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12febc: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12febcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fec0: 0x24632b40  addiu       $v1, $v1, 0x2B40
    ctx->pc = 0x12fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11072));
    // 0x12fec4: 0xaf8484e0  sw          $a0, -0x7B20($gp)
    ctx->pc = 0x12fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935776), GPR_U32(ctx, 4));
    // 0x12fec8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fecc: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fed0: 0xaf8384e4  sw          $v1, -0x7B1C($gp)
    ctx->pc = 0x12fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935780), GPR_U32(ctx, 3));
    // 0x12fed4: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fed8: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x12fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
    // 0x12fedc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fee0: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12fee4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12fee8: 0x24631d48  addiu       $v1, $v1, 0x1D48
    ctx->pc = 0x12fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7496));
    // 0x12feec: 0xaf8484e8  sw          $a0, -0x7B18($gp)
    ctx->pc = 0x12feecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 4));
    // 0x12fef0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fef4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12fef8: 0xaf8384ec  sw          $v1, -0x7B14($gp)
    ctx->pc = 0x12fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935788), GPR_U32(ctx, 3));
    // 0x12fefc: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff00: 0x24631f58  addiu       $v1, $v1, 0x1F58
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8024));
    // 0x12ff04: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff08: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff0c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12ff10: 0x24632268  addiu       $v1, $v1, 0x2268
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8808));
    // 0x12ff14: 0xaf8484f0  sw          $a0, -0x7B10($gp)
    ctx->pc = 0x12ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935792), GPR_U32(ctx, 4));
    // 0x12ff18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff1c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12ff20: 0xaf8384f4  sw          $v1, -0x7B0C($gp)
    ctx->pc = 0x12ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935796), GPR_U32(ctx, 3));
    // 0x12ff24: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff28: 0x24632b98  addiu       $v1, $v1, 0x2B98
    ctx->pc = 0x12ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11160));
    // 0x12ff2c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff30: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff34: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12ff38: 0x246323d0  addiu       $v1, $v1, 0x23D0
    ctx->pc = 0x12ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9168));
    // 0x12ff3c: 0xaf8484f8  sw          $a0, -0x7B08($gp)
    ctx->pc = 0x12ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), GPR_U32(ctx, 4));
    // 0x12ff40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff44: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12ff48: 0xaf8384fc  sw          $v1, -0x7B04($gp)
    ctx->pc = 0x12ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935804), GPR_U32(ctx, 3));
    // 0x12ff4c: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff50: 0x24632278  addiu       $v1, $v1, 0x2278
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8824));
    // 0x12ff54: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff58: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff5c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x12ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12ff60: 0x246338e0  addiu       $v1, $v1, 0x38E0
    ctx->pc = 0x12ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14560));
    // 0x12ff64: 0xaf848500  sw          $a0, -0x7B00($gp)
    ctx->pc = 0x12ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935808), GPR_U32(ctx, 4));
    // 0x12ff68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff6c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x12ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x12ff70: 0xaf838504  sw          $v1, -0x7AFC($gp)
    ctx->pc = 0x12ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 3));
    // 0x12ff74: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff78: 0x246330e0  addiu       $v1, $v1, 0x30E0
    ctx->pc = 0x12ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12512));
    // 0x12ff7c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x12ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff80: 0x3c030000  lui         $v1, 0x0
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)0 << 16));
    // 0x12ff84: 0x24633ab8  addiu       $v1, $v1, 0x3AB8
    ctx->pc = 0x12ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15032));
    // 0x12ff88: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x12ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ff8c: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x12ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x12ff90: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x12ff94: 0xaf838508  sw          $v1, -0x7AF8($gp)
    ctx->pc = 0x12ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935816), GPR_U32(ctx, 3));
    // 0x12ff98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff9c: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x12FF9Cu;
    SET_GPR_U32(ctx, 31, 0x12FFA4u);
    ctx->pc = 0x12FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF9Cu;
    // 0x12ffa0: 0xaf82850c  sw          $v0, -0x7AF4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x12FF9Cu, 0x12FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFA4u;
label_12ffa4:
    // 0x12ffa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffa8: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x12FFA8u;
    SET_GPR_U32(ctx, 31, 0x12FFB0u);
    ctx->pc = 0x12FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFA8u;
    // 0x12ffac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x12FFA8u, 0x12FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFB0u;
label_12ffb0:
    // 0x12ffb0: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x12FFB0u;
    SET_GPR_U32(ctx, 31, 0x12FFB8u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x12FFB0u, 0x12FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFB8u;
label_12ffb8:
    // 0x12ffb8: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x12FFB8u;
    SET_GPR_U32(ctx, 31, 0x12FFC0u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x12FFB8u, 0x12FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC0u;
label_12ffc0:
    // 0x12ffc0: 0xc05f58c  jal         func_17D630
    ctx->pc = 0x12FFC0u;
    SET_GPR_U32(ctx, 31, 0x12FFC8u);
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x12FFC0u, 0x12FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFC8u;
label_12ffc8:
    // 0x12ffc8: 0xc060010  jal         func_180040
    ctx->pc = 0x12FFC8u;
    SET_GPR_U32(ctx, 31, 0x12FFD0u);
    ctx->pc = 0x180040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180040u, 0x12FFC8u, 0x12FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFD0u;
label_12ffd0:
    // 0x12ffd0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12FFD0u;
    SET_GPR_U32(ctx, 31, 0x12FFD8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12FFD0u, 0x12FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFD8u;
label_12ffd8:
    // 0x12ffd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ffd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ffdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFDCu;
        // 0x12ffe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FFE4u;
}
