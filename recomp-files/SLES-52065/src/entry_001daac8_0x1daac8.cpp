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

// Function: entry_001daac8
// Address: 0x1daac8 - 0x1dad80
void entry_001daac8_0x1daac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daac8_0x1daac8");
#endif

    ctx->pc = 0x1daac8u;

    // 0x1daac8: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1daacc: 0x27c700b0  addiu       $a3, $fp, 0xB0
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
    // 0x1daad0: 0x258c7344  addiu       $t4, $t4, 0x7344
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29508));
    // 0x1daad4: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1daad8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x1daad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1daadc: 0x27ce0010  addiu       $t6, $fp, 0x10
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1daae0: 0xafac005c  sw          $t4, 0x5C($sp)
    ctx->pc = 0x1daae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 12));
    // 0x1daae4: 0x3c26021  addu        $t4, $fp, $v0
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1daae8: 0xafac0060  sw          $t4, 0x60($sp)
    ctx->pc = 0x1daae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 12));
    // 0x1daaec: 0x1d76021  addu        $t4, $t6, $s7
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x1daaf0: 0x27c90040  addiu       $t1, $fp, 0x40
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x1daaf4: 0xafac0064  sw          $t4, 0x64($sp)
    ctx->pc = 0x1daaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 12));
    // 0x1daaf8: 0x27cf0030  addiu       $t7, $fp, 0x30
    ctx->pc = 0x1daaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1daafc: 0x1226021  addu        $t4, $t1, $v0
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1dab00: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x1dab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
    // 0x1dab04: 0x1e86021  addu        $t4, $t7, $t0
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1dab08: 0x27cd0050  addiu       $t5, $fp, 0x50
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x1dab0c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x1dab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x1dab10: 0x27ca0080  addiu       $t2, $fp, 0x80
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x1dab14: 0x1a26021  addu        $t4, $t5, $v0
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1dab18: 0xafac002c  sw          $t4, 0x2C($sp)
    ctx->pc = 0x1dab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 12));
    // 0x1dab1c: 0x1486021  addu        $t4, $t2, $t0
    ctx->pc = 0x1dab1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1dab20: 0x27cb00a0  addiu       $t3, $fp, 0xA0
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
    // 0x1dab24: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1dab28: 0xafac0034  sw          $t4, 0x34($sp)
    ctx->pc = 0x1dab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 12));
    // 0x1dab2c: 0x1626021  addu        $t4, $t3, $v0
    ctx->pc = 0x1dab2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1dab30: 0x27c50090  addiu       $a1, $fp, 0x90
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1dab34: 0xafac003c  sw          $t4, 0x3C($sp)
    ctx->pc = 0x1dab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    // 0x1dab38: 0x27d30060  addiu       $s3, $fp, 0x60
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    // 0x1dab3c: 0xa46021  addu        $t4, $a1, $a0
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dab40: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x1dab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x1dab44: 0x2626021  addu        $t4, $s3, $v0
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dab48: 0x27d10070  addiu       $s1, $fp, 0x70
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x1dab4c: 0xafac0044  sw          $t4, 0x44($sp)
    ctx->pc = 0x1dab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 12));
    // 0x1dab50: 0x27d000d0  addiu       $s0, $fp, 0xD0
    ctx->pc = 0x1dab50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x1dab54: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x1dab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1dab58: 0x2286021  addu        $t4, $s1, $t0
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1dab5c: 0x3c8a021  addu        $s4, $fp, $t0
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1dab60: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x1dab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x1dab64: 0x2036021  addu        $t4, $s0, $v1
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1dab68: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x1dab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x1dab6c: 0x3c86021  addu        $t4, $fp, $t0
    ctx->pc = 0x1dab6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1dab70: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1dab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1dab74: 0x1c46021  addu        $t4, $t6, $a0
    ctx->pc = 0x1dab74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dab78: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x1dab78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x1dab7c: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dab80: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x1dab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
    // 0x1dab84: 0x1e46021  addu        $t4, $t7, $a0
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dab88: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1dab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x1dab8c: 0x1e26021  addu        $t4, $t7, $v0
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1dab90: 0xafac0014  sw          $t4, 0x14($sp)
    ctx->pc = 0x1dab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 12));
    // 0x1dab94: 0x1376021  addu        $t4, $t1, $s7
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x1dab98: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1dab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x1dab9c: 0x1a86021  addu        $t4, $t5, $t0
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x1daba0: 0x128a821  addu        $s5, $t1, $t0
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1daba4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1daba8: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1dabac: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1dabacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1dabb0: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x1dabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x1dabb4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1dabb8: 0xafac001c  sw          $t4, 0x1C($sp)
    ctx->pc = 0x1dabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 12));
    // 0x1dabbc: 0x2376021  addu        $t4, $s1, $s7
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1dabc0: 0x3c4b021  addu        $s6, $fp, $a0
    ctx->pc = 0x1dabc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1dabc4: 0xafac0024  sw          $t4, 0x24($sp)
    ctx->pc = 0x1dabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 12));
    // 0x1dabc8: 0x25087344  addiu       $t0, $t0, 0x7344
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29508));
    // 0x1dabcc: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x1dabccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabd0: 0xafac0030  sw          $t4, 0x30($sp)
    ctx->pc = 0x1dabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 12));
    // 0x1dabd4: 0xb76021  addu        $t4, $a1, $s7
    ctx->pc = 0x1dabd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1dabd8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1dabdc: 0x2174021  addu        $t0, $s0, $s7
    ctx->pc = 0x1dabdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1dabe0: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x1dabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
    // 0x1dabe4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1dabe8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1dabe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dabec: 0x24c6a000  addiu       $a2, $a2, -0x6000
    ctx->pc = 0x1dabecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942720));
    // 0x1dabf0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1dabf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1dabf4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1dabf8: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x1dabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x1dabfc: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1dabfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dac00: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1dac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1dac04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dac08: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1dac08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1dac0c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1dac0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1dac10: 0x2508a03c  addiu       $t0, $t0, -0x5FC4
    ctx->pc = 0x1dac10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942780));
    // 0x1dac14: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dac18: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1dac1c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x1dac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x1dac20: 0xafb90000  sw          $t9, 0x0($sp)
    ctx->pc = 0x1dac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 25));
    // 0x1dac24: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1dac28: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x1dac28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x1dac2c: 0x1b79021  addu        $s2, $t5, $s7
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x1dac30: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dac30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dac34: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dac38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dac38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dac3c: 0x1f77821  addu        $t7, $t7, $s7
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x1dac40: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dac44: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1dac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dac48: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dac4c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x1dac50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dac50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1dac54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dac58: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x1dac58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x1dac5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dac60: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dac64: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dac64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dac68: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1dac68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1dac6c: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1dac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1dac70: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1dac70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x1dac74: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1dac74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1dac78: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dac7c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1dac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1dac80: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dac84: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x1dac84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x1dac88: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x1dac88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dac8c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1dac90: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dac94: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x1dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x1dac98: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x1dac98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x1dac9c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1daca0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1daca4: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1daca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1daca8: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x1daca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1dacac: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1dacacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1dacb0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dacb4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1dacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1dacb8: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dacbc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1dacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1dacc0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dacc4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dacc8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1dacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1daccc: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dacccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dacd0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dacd4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dacd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dacd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dacdc: 0x8fac002c  lw          $t4, 0x2C($sp)
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1dace0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dace0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dace4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1dace4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1dace8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dacec: 0xacc80074  sw          $t0, 0x74($a2)
    ctx->pc = 0x1dacecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 8));
    // 0x1dacf0: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x1dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x1dacf4: 0x8fac0038  lw          $t4, 0x38($sp)
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dacf8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dacfc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1dad00: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dad00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dad04: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dad04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dad08: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dad0c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1dad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1dad10: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dad14: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1dad14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1dad18: 0x8fac0044  lw          $t4, 0x44($sp)
    ctx->pc = 0x1dad18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1dad1c: 0xe7c000e0  swc1        $f0, 0xE0($fp)
    ctx->pc = 0x1dad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 224), bits); }
    // 0x1dad20: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1dad20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1dad24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1dad24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1dad28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dad2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dad30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1dad34: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1dad38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dad38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dad3c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1dad40: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1dad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1dad44: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x1dad44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dad48: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dad48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dad4c: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x1dad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x1dad50: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dad54: 0xe58000c0  swc1        $f0, 0xC0($t4)
    ctx->pc = 0x1dad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 192), bits); }
    // 0x1dad58: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1dad5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dad60: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1dad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dad64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dad64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dad68: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1dad6c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dad70: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1dad70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dad74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DAD74u;
    {
        const bool branch_taken_0x1dad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD74u;
        // 0x1dad78: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad74) {
            ctx->pc = 0x1DADFCu;
            return;
        }
    }
    ctx->pc = 0x1DAD7Cu;
    // 0x1dad7c: 0x0  nop
    ctx->pc = 0x1dad7cu;
    // NOP
    ctx->pc = 0x1dad80u;
}
